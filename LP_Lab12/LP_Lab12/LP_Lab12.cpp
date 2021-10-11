#include<iostream>
#include"FST.h"

int main() {
	setlocale(LC_ALL, "ru");

	char str[] = { "abcdgij" };
	char str1[] = { "abccfgij" };
	char str2[] = { "abcccfgdgccij" };
	char str3[] = { "abcdgdgfgcccccij" };
	char str4[] = { "abccccccccccdgdgdgfgfgegfgij" };
	char str5[] = { "abcccccdgdgdgdgdgdgdgcccccccccccccccccij" };
	char str6[] = { "abccccccccccccccccdgcccccccccccccccccccccij" };
	char str7[] = { "abcccccdgegegegfgdgdgegij" };
	char str8[] = { "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa" };
	char str9[] = { "abcccccccij" };

	//ab(c)*((d+e+f)g)+ c* ij

	FST::FST fst1(
		str,
		8,
		/*0*/	FST::NODE(1, FST::RELATION('a', 1)),
		/*1*/	FST::NODE(1, FST::RELATION('b', 2)),
		/*2*/	FST::NODE(4, FST::RELATION('c', 2), FST::RELATION('d', 3), FST::RELATION('e', 3), FST::RELATION('f', 3)),
		/*3*/	FST::NODE(5, FST::RELATION('d', 3), FST::RELATION('e', 3), FST::RELATION('f', 3), FST::RELATION('g', 4), FST::RELATION('g', 5)),
		/*4*/	FST::NODE(3, FST::RELATION('d', 3), FST::RELATION('e', 3), FST::RELATION('f', 3)),
		/*5*/	FST::NODE(2, FST::RELATION('c', 5), FST::RELATION('i', 6)),
		/*6*/	FST::NODE(1, FST::RELATION('j', 7)),
		/*7*/	FST::NODE()
	);

	if (FST::execute(fst1))
		std::cout << "Цепочка " << fst1.string << " распознана" << std::endl;
	else
		std::cout << "Цепочка " << fst1.string << " не распознана" << std::endl;

	FST::FST fst2(
		str1,
		8,
		/*0*/	FST::NODE(1, FST::RELATION('a', 1)),
		/*1*/	FST::NODE(1, FST::RELATION('b', 2)),
		/*2*/	FST::NODE(4, FST::RELATION('c', 2), FST::RELATION('d', 3), FST::RELATION('e', 3), FST::RELATION('f', 3)),
		/*3*/	FST::NODE(5, FST::RELATION('d', 3), FST::RELATION('e', 3), FST::RELATION('f', 3), FST::RELATION('g', 4), FST::RELATION('g', 5)),
		/*4*/	FST::NODE(3, FST::RELATION('d', 3), FST::RELATION('e', 3), FST::RELATION('f', 3)),
		/*5*/	FST::NODE(2, FST::RELATION('c', 5), FST::RELATION('i', 6)),
		/*6*/	FST::NODE(1, FST::RELATION('j', 7)),
		/*7*/	FST::NODE()
	);

	if (FST::execute(fst2))
		std::cout << "Цепочка " << fst2.string << " распознана" << std::endl;
	else
		std::cout << "Цепочка " << fst2.string << " не распознана" << std::endl;

	FST::FST fst3(
		str2,
		8,
		/*0*/	FST::NODE(1, FST::RELATION('a', 1)),
		/*1*/	FST::NODE(1, FST::RELATION('b', 2)),
		/*2*/	FST::NODE(4, FST::RELATION('c', 2), FST::RELATION('d', 3), FST::RELATION('e', 3), FST::RELATION('f', 3)),
		/*3*/	FST::NODE(5, FST::RELATION('d', 3), FST::RELATION('e', 3), FST::RELATION('f', 3), FST::RELATION('g', 4), FST::RELATION('g', 5)),
		/*4*/	FST::NODE(3, FST::RELATION('d', 3), FST::RELATION('e', 3), FST::RELATION('f', 3)),
		/*5*/	FST::NODE(2, FST::RELATION('c', 5), FST::RELATION('i', 6)),
		/*6*/	FST::NODE(1, FST::RELATION('j', 7)),
		/*7*/	FST::NODE()
	);
	if (FST::execute(fst3))
		std::cout << "Цепочка " << fst3.string << " распознана" << std::endl;
	else
		std::cout << "Цепочка " << fst3.string << " не распознана" << std::endl;

	FST::FST fst4(
		str3,
		8,
		/*0*/	FST::NODE(1, FST::RELATION('a', 1)),
		/*1*/	FST::NODE(1, FST::RELATION('b', 2)),
		/*2*/	FST::NODE(4, FST::RELATION('c', 2), FST::RELATION('d', 3), FST::RELATION('e', 3), FST::RELATION('f', 3)),
		/*3*/	FST::NODE(5, FST::RELATION('d', 3), FST::RELATION('e', 3), FST::RELATION('f', 3), FST::RELATION('g', 4), FST::RELATION('g', 5)),
		/*4*/	FST::NODE(3, FST::RELATION('d', 3), FST::RELATION('e', 3), FST::RELATION('f', 3)),
		/*5*/	FST::NODE(2, FST::RELATION('c', 5), FST::RELATION('i', 6)),
		/*6*/	FST::NODE(1, FST::RELATION('j', 7)),
		/*7*/	FST::NODE()
	);
	if (FST::execute(fst4))
		std::cout << "Цепочка " << fst4.string << " распознана" << std::endl;
	else
		std::cout << "Цепочка " << fst4.string << " не распознана" << std::endl;

	FST::FST fst5(
		str4,
		8,
		/*0*/	FST::NODE(1, FST::RELATION('a', 1)),
		/*1*/	FST::NODE(1, FST::RELATION('b', 2)),
		/*2*/	FST::NODE(4, FST::RELATION('c', 2), FST::RELATION('d', 3), FST::RELATION('e', 3), FST::RELATION('f', 3)),
		/*3*/	FST::NODE(5, FST::RELATION('d', 3), FST::RELATION('e', 3), FST::RELATION('f', 3), FST::RELATION('g', 4), FST::RELATION('g', 5)),
		/*4*/	FST::NODE(3, FST::RELATION('d', 3), FST::RELATION('e', 3), FST::RELATION('f', 3)),
		/*5*/	FST::NODE(2, FST::RELATION('c', 5), FST::RELATION('i', 6)),
		/*6*/	FST::NODE(1, FST::RELATION('j', 7)),
		/*7*/	FST::NODE()
	);
	if (FST::execute(fst5))
		std::cout << "Цепочка " << fst5.string << " распознана" << std::endl;
	else
		std::cout << "Цепочка " << fst5.string << " не распознана" << std::endl;

	FST::FST fst6(
		str5,
		8,
		/*0*/	FST::NODE(1, FST::RELATION('a', 1)),
		/*1*/	FST::NODE(1, FST::RELATION('b', 2)),
		/*2*/	FST::NODE(4, FST::RELATION('c', 2), FST::RELATION('d', 3), FST::RELATION('e', 3), FST::RELATION('f', 3)),
		/*3*/	FST::NODE(5, FST::RELATION('d', 3), FST::RELATION('e', 3), FST::RELATION('f', 3), FST::RELATION('g', 4), FST::RELATION('g', 5)),
		/*4*/	FST::NODE(3, FST::RELATION('d', 3), FST::RELATION('e', 3), FST::RELATION('f', 3)),
		/*5*/	FST::NODE(2, FST::RELATION('c', 5), FST::RELATION('i', 6)),
		/*6*/	FST::NODE(1, FST::RELATION('j', 7)),
		/*7*/	FST::NODE()
	);
	if (FST::execute(fst6))
		std::cout << "Цепочка " << fst6.string << " распознана" << std::endl;
	else
		std::cout << "Цепочка " << fst6.string << " не распознана" << std::endl;

	FST::FST fst7(
		str6,
		8,
		/*0*/	FST::NODE(1, FST::RELATION('a', 1)),
		/*1*/	FST::NODE(1, FST::RELATION('b', 2)),
		/*2*/	FST::NODE(4, FST::RELATION('c', 2), FST::RELATION('d', 3), FST::RELATION('e', 3), FST::RELATION('f', 3)),
		/*3*/	FST::NODE(5, FST::RELATION('d', 3), FST::RELATION('e', 3), FST::RELATION('f', 3), FST::RELATION('g', 4), FST::RELATION('g', 5)),
		/*4*/	FST::NODE(3, FST::RELATION('d', 3), FST::RELATION('e', 3), FST::RELATION('f', 3)),
		/*5*/	FST::NODE(2, FST::RELATION('c', 5), FST::RELATION('i', 6)),
		/*6*/	FST::NODE(1, FST::RELATION('j', 7)),
		/*7*/	FST::NODE()
	);
	if (FST::execute(fst7))
		std::cout << "Цепочка " << fst7.string << " распознана" << std::endl;
	else
		std::cout << "Цепочка " << fst7.string << " не распознана" << std::endl;

	FST::FST fst8(
		str7,
		8,
		/*0*/	FST::NODE(1, FST::RELATION('a', 1)),
		/*1*/	FST::NODE(1, FST::RELATION('b', 2)),
		/*2*/	FST::NODE(4, FST::RELATION('c', 2), FST::RELATION('d', 3), FST::RELATION('e', 3), FST::RELATION('f', 3)),
		/*3*/	FST::NODE(5, FST::RELATION('d', 3), FST::RELATION('e', 3), FST::RELATION('f', 3), FST::RELATION('g', 4), FST::RELATION('g', 5)),
		/*4*/	FST::NODE(3, FST::RELATION('d', 3), FST::RELATION('e', 3), FST::RELATION('f', 3)),
		/*5*/	FST::NODE(2, FST::RELATION('c', 5), FST::RELATION('i', 6)),
		/*6*/	FST::NODE(1, FST::RELATION('j', 7)),
		/*7*/	FST::NODE()
	);
	if (FST::execute(fst8))
		std::cout << "Цепочка " << fst8.string << " распознана" << std::endl;
	else
		std::cout << "Цепочка " << fst8.string << " не распознана" << std::endl;

	FST::FST fst9(
		str8,
		8,
		/*0*/	FST::NODE(1, FST::RELATION('a', 1)),
		/*1*/	FST::NODE(1, FST::RELATION('b', 2)),
		/*2*/	FST::NODE(4, FST::RELATION('c', 2), FST::RELATION('d', 3), FST::RELATION('e', 3), FST::RELATION('f', 3)),
		/*3*/	FST::NODE(5, FST::RELATION('d', 3), FST::RELATION('e', 3), FST::RELATION('f', 3), FST::RELATION('g', 4), FST::RELATION('g', 5)),
		/*4*/	FST::NODE(3, FST::RELATION('d', 3), FST::RELATION('e', 3), FST::RELATION('f', 3)),
		/*5*/	FST::NODE(2, FST::RELATION('c', 5), FST::RELATION('i', 6)),
		/*6*/	FST::NODE(1, FST::RELATION('j', 7)),
		/*7*/	FST::NODE()
	);
	if (FST::execute(fst9))
		std::cout << "Цепочка " << fst9.string << " распознана" << std::endl;
	else
		std::cout << "Цепочка " << fst9.string << " не распознана" << std::endl;

	FST::FST fst10(
		str9,
		8,
		/*0*/	FST::NODE(1, FST::RELATION('a', 1)),
		/*1*/	FST::NODE(1, FST::RELATION('b', 2)),
		/*2*/	FST::NODE(4, FST::RELATION('c', 2), FST::RELATION('d', 3), FST::RELATION('e', 3), FST::RELATION('f', 3)),
		/*3*/	FST::NODE(5, FST::RELATION('d', 3), FST::RELATION('e', 3), FST::RELATION('f', 3), FST::RELATION('g', 4), FST::RELATION('g', 5)),
		/*4*/	FST::NODE(3, FST::RELATION('d', 3), FST::RELATION('e', 3), FST::RELATION('f', 3)),
		/*5*/	FST::NODE(2, FST::RELATION('c', 5), FST::RELATION('i', 6)),
		/*6*/	FST::NODE(1, FST::RELATION('j', 7)),
		/*7*/	FST::NODE()
	);
	if (FST::execute(fst10))
		std::cout << "Цепочка " << fst10.string << " распознана" << std::endl;
	else
		std::cout << "Цепочка " << fst10.string << " не распознана" << std::endl;
}