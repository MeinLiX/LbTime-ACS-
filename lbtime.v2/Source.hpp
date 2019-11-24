#pragma once

#include "TemplateFN.hpp"
#include "lbtime.v2.hpp"


template<class T, class G>
void makeVectorWithTime(vector<pair<T, G>> & currVect)
{
	currVect.push_back(make_pair(" \t Sum \t char\t \t", Time_SUM<char>()));			//char
	currVect.push_back(make_pair(" \t Minus \t char\t \t", Time_MINUS<char>()));
	currVect.push_back(make_pair(" \t Mult \t char\t \t", Time_MULT<char>()));
	currVect.push_back(make_pair(" \t Div \t char\t \t", Time_DIV<char>()));
	currVect.push_back(make_pair(" \t Sum \t int\t \t", Time_SUM<int>()));				//int
	currVect.push_back(make_pair(" \t Minus \t int\t \t", Time_MINUS<int>()));
	currVect.push_back(make_pair(" \t Mult \t int\t \t", Time_MULT<int>()));
	currVect.push_back(make_pair(" \t Div \t int\t \t", Time_DIV<int>()));
	currVect.push_back(make_pair(" \t Sum \t long long\t", Time_SUM<long long>()));		//long long
	currVect.push_back(make_pair(" \t Minus \t long long\t", Time_MINUS<long long>()));
	currVect.push_back(make_pair(" \t Mult \t long long\t", Time_MULT<long long>()));
	currVect.push_back(make_pair(" \t Div \t long long\t", Time_DIV<long long>()));
	currVect.push_back(make_pair(" \t Sum \t float\t \t", Time_SUM<float>()));			//float
	currVect.push_back(make_pair(" \t Minus \t float\t \t", Time_MINUS<float>()));
	currVect.push_back(make_pair(" \t Mult \t float\t \t", Time_MULT<float>()));
	currVect.push_back(make_pair(" \t Div \t float\t \t", Time_DIV<float>()));
	currVect.push_back(make_pair(" \t Sum \t double\t \t", Time_SUM<double>()));		//double
	currVect.push_back(make_pair(" \t Minus \t double\t \t", Time_MINUS<double>()));
	currVect.push_back(make_pair(" \t Mult \t double\t \t", Time_MULT<double>()));
	currVect.push_back(make_pair(" \t Div \t double\t \t", Time_DIV<double>()));
};

template<class T, class G>
void sorte(vector<pair<T, G>>& currVect)
{ //SomeTime Error FN sorte <=> (Trouble with <utility>)
	std::sort(currVect.begin(), currVect.end(),
		[](const std::pair<T, long double> & x, const std::pair<T, long double> & y)
		{
			return x.second <= y.second;
		});
};

template<class T, class G>
void clear(vector<pair<T, G>>& currVect)
{
	currVect.clear();
};

template<class T, class G>
void PrintResult(vector<pair<T, G>>& currVect)
{
	long double minT = 10e8;
	std::cout << fixed << std::setprecision(3);
	for (const std::pair<string, long double>& p : currVect) {
		if (p.second < minT) minT = p.second;
	}

	for (const std::pair<string, long double>& p : currVect) {
		int l = 0;

		std::cout << p.first << p.second << " \t ";
		for (l; l <= (int)(minT / p.second * 100); l += 5)
			cout << "X";
		for (l; l <= 100; l += 5)cout << " ";
		cout << "\t" << (int)(minT / p.second * 100) << "%" << endl;
	}
};