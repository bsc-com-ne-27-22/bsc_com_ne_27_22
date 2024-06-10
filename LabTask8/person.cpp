#include "person.h"

Person::Person() : mWeight(0), mFirstName(""), mAge(0) {}

Person::Person(float newWeight) :mWeight(newWeight), mFirstName(""), mAge(0) {}

Person::~Person() {}

float Person::operator + (const Person& otherPerson) {
    return this->mWeight + otherPerson.mWeight;
}