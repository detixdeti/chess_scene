#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <glm/glm.hpp>
#include <vector>

class Functions
{
public:
    static std::vector<glm::vec3> Lane_Riesenfeld_Unterteilungs_Algorithmus(std::vector<glm::vec3> vertices, int n);
    static int getId();

private:
    static int unique_id;

};

#endif // FUNCTIONS_H
