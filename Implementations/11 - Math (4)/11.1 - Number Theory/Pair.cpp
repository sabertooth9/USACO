/**
* Description: modular arithmetic with pairs
	* use for hashing
*/

pi operator+(const pi& l, const pi& r) { return {ad(l.f,r.f),ad(l.s,r.s)}; }
pi operator-(const pi& l, const pi& r) { return {sub(l.f,r.f),sub(l.s,r.s)}; }
pi operator*(const pi& l, const pi& r) { return {mul(l.f,r.f),mul(l.s,r.s)}; }
pi operator*(const pi& l, const int& r) { return l*pi(r,r); }
pi operator*(const int& r, const pi& l) { return l*r; }

pi operator+=(pi& l, const pi& r) { return l = l+r; }
pi operator-=(pi& l, const pi& r) { return l = l-r; }
template<class T> pi operator*=(pi& l, const T& r) { return l = l*r; }

std::ostream& operator<<(std::ostream &strm, const pi& a) {
    strm << a.f << " " << a.s << " | ";
    return strm;
}