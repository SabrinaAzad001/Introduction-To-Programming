#include <iostream>
#include "Final-Sabrina.h"

int main(){
    Person p;
    p.setName("Change Name");
    p.setCountry("Bangladeshi");
    p.getName();
    p.getCountry();

    Student s;
    s.setName("Change Name");
    s.setId(1234);
    s.setSection("Change Section");
    s.getName();
    s.getId();
    s.getSection();

    scholarshipStudent ss;
    ss.setName("Change Name");
    ss.setId(67232);
    ss.setYear("First Year");
    ss.getName();
    ss.getId();
    ss.getYear();

    Employee e;
    e.setName("Change Name");
    e.setID(4568);
    e.setJob("Part-Time");
    e.getName();
    e.getID();
    e.getJob();

    TA t;
    t.setId(764);
    t.setYear(2021);
    t.setCGPA(4);
    t.getId();
    t.getYear();
    t.getCGPA();

    Faculty f;
    f.setName("Change Name");
    f.setDepartment("Change Department");
    f.setRoom(123);
    f.getName();
    f.getDepartment();
    f.getRoom();

    Officer o;
    o.setName("Change Name");
    o.setBuilding("Set a building name");
    o.setEmail("Put an email address");
    o.getName();
    o.getBuilding();
    o.getEmail();
}
