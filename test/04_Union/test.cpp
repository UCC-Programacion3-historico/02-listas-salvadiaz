#include "gtest/gtest.h"
#include "../../Lista/Lista.h"
#include "../../04_Union/union.h"

TEST(test_04_Union, unirDosListas) {
    Lista<int> l1, l2;
    int i;
    for (i = 0; i < 10; i++)
        l1.insertarUltimo(i);

    for (; i < 20; i++)
        l2.insertarUltimo(i);

    Lista<int> *lf = unir(l1,l2);

    EXPECT_EQ(lf->getDato(13), 13);
}