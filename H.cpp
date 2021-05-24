#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int number() {
int res = 0;
for (;;) {
char c = cin.get();
if (c >= '0' && c <= '9')
res = res * 10 + c - '0';
else {
cin.putback(c);
return res;
}
}
}
int expr();
int skobki() {
char c = cin.get();
if (c == '(') {
int x = expr();
cin.get();
return x;
} else {
cin.putback(c);
return number();
}
}
int factor() {
int x = skobki();
for (;;) {
char c = cin.get();
switch (c) {
case '*':
x *= skobki();
break;
case '/':
x /= skobki();
break;
default:
cin.putback(c);
return x;
}
}
}
int expr() {
int x = factor();
for (;;) {
char c = cin.get();
switch (c) {
case '+':
x += factor();
break;
case '-':
x -= factor();
break;
default:
cin.putback(c);
return x;
}
}
}
int main() {
int res = expr();
cout << res ;
}