#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "OList.h"

TEST_CASE("insert and get functions"){
    OList *o = new OList;
    o->insert("five");
    o->insert("lo");
    o->insert("no");
    CHECK(o->get(0) == "no");
    CHECK(o->get(1) == "lo");
    CHECK(o->get(2) == "five");

}


TEST_CASE("length and contains functions"){
    OList *o = new OList;
    o->insert("five");
    o->insert("lo");
    o->insert("no");
    CHECK(o-> length() == 3);
    CHECK(o->contains("five"));
    CHECK(o->contains("no"));
    CHECK(o->contains("lo"));

}

TEST_CASE("remove function"){
    OList *o = new OList;
    o->insert("five");
    o->insert("lo");
    o->insert("no");
    CHECK(o-> length() == 3);
    o-> remove(2);
    o-> remove(1);
    CHECK(o-> length() == 1);
}


TEST_CASE("reverse function"){
    OList *o = new OList;
    o->insert("five");
    o->insert("lo");
    o->insert("no");

    o-> reverse();
    CHECK(o-> get(0) == "five");
    CHECK(o-> get(1) == "lo");
    CHECK(o-> get(2) == "no");
}

TEST_CASE("destructor function"){
    OList *o = new OList;
    o->insert("five");
    o->insert("lo");
    o->insert("no");

    delete o;
    o = nullptr;
    CHECK(o == nullptr);
}
