#pragma once
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class App
{
	string name;
	string category;
	double rating;
	unsigned long long ratingCount;
	unsigned long long installs;
	bool free;
	double price;
	string currency;
	unsigned long size;
	string minOS;
	string contentRating;
	bool ads;
	bool inAppPurchases;
	bool editorsChoice;
	double rank;
public:
	//default constructor
	App() {
		name = "";
		category = "";
		rating = 0.0;
		ratingCount = 0;
		installs = 0;
		free = false;
		price = 0.0;
		currency = "";
		size = 0;
		minOS = "";
		contentRating = "";
		ads = false;
		inAppPurchases = false;
		editorsChoice = false;
	}

	//constructor for source app
	//category, price, reviews (double and count), ads, in-app purchases, version, size, editors choice, content rating
	App(string c, double p, double rat, string con, bool a, bool inapp, unsigned long s) {
		category = c;
		price = p;
		rating = rat;
		contentRating = con;
		ads = a;
		inAppPurchases = inapp;
		size = s;
		
	}
	//constructor for all others 
	App(string n, string c, double rat, unsigned long long ratCnt, unsigned long long i, bool f, double p, string curr, unsigned long si, string android, string con, bool a, bool inapp, bool edit, double s) {
		name = n;
		category = c;
		price = p;
		rating = rat;
		ratingCount = ratCnt;
		installs = i;
		free = f;
		currency = curr;
		size = si;
		minOS = android;
		contentRating = con;
		ads = a;
		inAppPurchases = inapp;
		editorsChoice = edit;
		rank = 0;
	}

	void Rank(App s) {
		double temp = 0;

		//Category
		if (this->category == s.category)
		{
			temp = temp + 3;
		}

		//Price
		if (this->price == s.price || (this->price >= 5 && s.price == 6))
		{
			temp = temp + 3;
		}
		else if (fabs(this->price - s.price) <= 1)
		{
			temp += 3 * fabs((1 - (this->price - s.price)));
		}

		//Rating
		if (this->rating == s.rating)
		{
			temp = temp + 3;
		}
		else if (fabs(this->rating - s.rating) <= 1)
		{
			temp += 3 * (1 - fabs(this->rating - s.rating));
		}

		//Maturity
		if (this->contentRating == s.contentRating)
		{
			temp = temp + 3;
		}

		//Ads?
		if (this->ads == s.ads)
		{
			temp = temp + 3;
		}

		//In app purchases
		if (this->inAppPurchases == s.inAppPurchases)
		{
			temp = temp + 3;
		}

		//Size
		if (s.size == 500000 && (this->size > 0 && this->size <= 500000))
		{
			if (s.size != 0)
				temp += 3 * (double)(this->size / s.size);
		}
		else if (s.size == 1000000 && (this->size > 500000 && this->size <= 1000000))
		{
			if (s.size != 0)
				temp += 3 * (double)(this->size / s.size);
		}
		else if (s.size == 5000000 && (this->size > 1000000 && this->size <= 5000000))
		{
			if (s.size != 0)
				temp += 3 * (double)(this->size / s.size);
		}
		else if (s.size == 10000000 && (this->size > 5000000 && this->size <= 10000000))
		{
			if (s.size != 0)
				temp += 3 * (double)(this->size / s.size);
		}
		else if (s.size == 10000001 && this->size > 10000000)
		{
			temp += 3;
		}
		rank = temp;
	}

	double GetRank()
	{
		return rank;
	}
	string GetName()
	{
		return name;
	}
};
