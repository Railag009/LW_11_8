#include <sstream>
#include <iostream>
#include <iomanip>

using namespace std;

struct Dlist
{

	int info;
	Dlist* next, * prev;

};


int main()
{

	Dlist* head, * p, * r;
	int x, k, y;
	int max, i, a, b;
	float sr;
	cin >> x;
	head = new Dlist;
	head->info = x;
	p = head;


	y = 0;

	cin >> x;
	while (x)
	{

		k = 0;

		a = abs(x);
		while (a > 0)
		{
			k++;
			a /= 10;
		}

		if (abs(x) / pow(10, k - 1) == 8) y++;

		r = new Dlist;
		r->info = x;
		r->prev = p;
		p->next = r;
		p = r;
		cin >> x;


	}

	head->prev = p;
	p->next = head;

	p = head;


	sr = 0;

	if (y != 0)
	{


		do
		{

			if ((p->info < 0) && (p->prev->info % 4 == 0))
			{

				sr += abs(p->info);

			}

			p = p->next;

		} while (p != head);

	}

	cout << sr;

}