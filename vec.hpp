class Vec {
private:
    char name;
    int len;
    double *value;
public:
    Vec();
    Vec(char name, int len, const double *value);
    Vec(Vec const &source);
    ~Vec();

    auto operator=(Vec const &source) -> Vec &;

    auto operator+(Vec const &source) const -> Vec;
    auto operator+=(Vec const &source) -> Vec &;

    auto operator*(double coefficient) const -> Vec;
    auto operator*=(double coefficient) -> Vec &;
    auto operator*(Vec const &source) const -> double;

    friend auto operator<<(std::ostream &os, Vec const &vec) -> std::ostream &;
    friend auto operator>>(std::istream &is, Vec &vec) -> std::istream &;

    auto getName() const -> char;
    auto setName(char newName) -> void;
    auto increaseName() -> void;

    auto mean(double (*func)(double) = nullptr) const -> double;
    auto getModified(double (*func)(double) = nullptr) -> Vec &;
};

auto printScalarProduct(Vec const &vec1, Vec const &vec2) -> void;
auto printMean(Vec const &vec, double (*func)(double) = nullptr) -> void;