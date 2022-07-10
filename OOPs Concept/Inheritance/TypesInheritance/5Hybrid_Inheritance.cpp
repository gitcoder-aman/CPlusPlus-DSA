// Hybrid -> Combination of more than 1 type of inheritance
class parent_class1 {
    //Body of parent class1
};
class parent_class2 {
    //Body of parent class1
};
class child_class1: access_modifier parent_class1 {
    //Body of child class1
};
class child_class2: access_modifier parent_class1, access_modifier parent_class2 {
    //Body of child class2
};