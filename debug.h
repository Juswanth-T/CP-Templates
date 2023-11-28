#include<iostream>
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;

void debug_print(string s) { cerr << "\"" << s << "\""; }
void debug_print(const char* s) { cerr << "\"" << *s << "\""; }
void debug_print(bool val) { cerr << (val ? "true" : "false"); }
void debug_print(int val) { cerr << val; }
void debug_print(ll val) { cerr << val; }
void debug_print(ld val) { cerr << val; }
template<typename F, typename S>
void debug_print(pair<F, S> val) {
    cerr << "(";
    debug_print(val.first);
    cerr << ", ";
    debug_print(val.second);
    cerr << ")";
}
void debug_print(vector<bool> val) {
    cerr << "{";
    bool first = true;
    for (bool x : val) {
        if (!first) { cerr << ", "; } 
        else { first = false; }
        debug_print(x);
    }
    cerr << "}";
}
template<typename T>
void debug_print(T val) {
    cerr << "{";
    bool first = true;
    for (const auto &x : val) {
        if (!first) { cerr << ", ";
        } else { first = false; }
        debug_print(x);
    }
    cerr << "}";
}
void debug_print_collection() { cerr << endl; }
template<typename First, typename... Args>
void debug_print_collection(First val, Args... args) {
    cerr << " ";
    debug_print(val);
    debug_print_collection(args...);
}

#define dbg(...) cerr << #__VA_ARGS__ << " ="; debug_print_collection(__VA_ARGS__);
