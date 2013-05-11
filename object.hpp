#ifndef OBJECT_HPP__
#define OBJECT_HPP__

#include "mesh.hpp"
#include <string>
#include <vector>
#include <memory>
#include "shared.hpp"

namespace OBJ
{
   std::vector<std1::shared_ptr<GL::Mesh> > load_from_file(const std::string& path);
}

#endif

