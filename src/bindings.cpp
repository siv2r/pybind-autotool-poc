#include <pybind11/pybind11.h>
#include "../complex.h"

namespace py = pybind11;

PYBIND11_MODULE(cmplx, m) {
    m.doc() = "pybind11 plugin for complex number"; // optional module docstring
    py::class_<cmplx>(m,"cmplx")
        .def_readwrite("x", &cmplx::x)
        .def_readwrite("y", &cmplx::y)
        .def(py::init<>())
        .def(py::init<int,int>());

    m.def("add", &add, "A function which adds two complex numbers");
    m.def("sub", &sub, "A function which subtracts two complex numbers");
}