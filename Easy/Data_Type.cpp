#include <iostream>
#include <map>

int dataTypes(string type) {
     map<string, int> dtypes;

    dtypes["Integer"] = 4;
    dtypes["Long"] = 8;
    dtypes["Float"] = 4;
    dtypes["Double"] = 8;
    dtypes["Character"] = 1;

    if (dtypes.find(type) != dtypes.end()) 
    {
        return dtypes[type];
    }
    else 
    {
        return 0; 
    }
}
