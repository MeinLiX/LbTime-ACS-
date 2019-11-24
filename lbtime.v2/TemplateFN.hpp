#pragma once
#include "lbtime.v2.hpp"

#define loope	c = a; \
				a = b; \
				b = d;

#define SUM		a = b + d;\
				b = c + d;\
				c = a + d;

#define MINUS	a = b - d;\
				b = c - d;\
				c = a - d;

#define MULT	a = b * d;\
				b = c * d;\
				c = a * d;

#define DIV		a = b / d;\
				b = c / d;\
				c = a / d;


template<class T>
double Time_SUM(int time = 15000000)
{
	volatile T a = rand() % 20 + 17, b = rand() % 20 + 17, c = rand() % 20 + 17, d = rand() % 20 + 17;
	auto t1 = std::chrono::high_resolution_clock::now();
	for (volatile long long i = 0; i <= time / 15; i++) { loope loope loope loope loope };
	auto t2 = std::chrono::high_resolution_clock::now();
	auto t3 = std::chrono::high_resolution_clock::now();
	for (volatile long long i = 0; i <= time / 15; i++) { SUM SUM SUM SUM SUM };
	auto t4 = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double, std::nano> res = (t4-t3) - (t2-t1);
	return (double)res.count() / time;
}
template<class T>
double Time_MINUS(int time = 15000000)
{
	volatile T a = rand() % 20 + 17, b = rand() % 20 + 17, c = rand() % 20 + 17, d = rand() % 20 + 17;
	auto t1 = std::chrono::high_resolution_clock::now();
	for (volatile long long i = 0; i <= time / 15; i++) { loope loope loope loope loope };
	auto t2 = std::chrono::high_resolution_clock::now();
	auto t3 = std::chrono::high_resolution_clock::now();
	for (volatile long long i = 0; i <= time / 15; i++) { MINUS MINUS MINUS MINUS MINUS};
	auto t4 = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double, std::nano> res = (t4 - t3) - (t2 - t1);
	return (double)res.count() / time;
}
template<class T>
double Time_MULT(int time = 15000000)
{
	volatile T a = rand() % 20 + 17, b = rand() % 20 + 17, c = rand() % 20 + 17, d = rand() % 20 + 17;
	auto t1 = std::chrono::high_resolution_clock::now();
	for (volatile long long i = 0; i <= time / 15; i++) { loope loope loope loope loope };
	auto t2 = std::chrono::high_resolution_clock::now();
	auto t3 = std::chrono::high_resolution_clock::now();
	for (volatile long long i = 0; i <= time / 15; i++) { MULT MULT MULT MULT MULT };
	auto t4 = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double, std::nano> res = (t4 - t3) - (t2 - t1);
	return (double)res.count() / time;
}
template<class T>
double Time_DIV(int time = 15000000)
{
	volatile T a = rand() % 20 + 17, b = rand() % 20 + 17, c = rand() % 20 + 17, d = rand() % 20 + 17;
	auto t1 = std::chrono::high_resolution_clock::now();
	for (volatile long long i = 0; i <= time / 15; i++) { loope loope loope loope loope };
	auto t2 = std::chrono::high_resolution_clock::now();
	auto t3 = std::chrono::high_resolution_clock::now();
	for (volatile long long i = 0; i <= time / 15; i++) { DIV DIV DIV DIV DIV };
	auto t4 = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double, std::nano> res = (t4 - t3) - (t2 - t1);
	return (double)res.count() / time;
}