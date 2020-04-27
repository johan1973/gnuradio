/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/* This file is automatically generated using bindtool */

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/analog/frequency_modulator_fc.h>
// pydoc.h is automatically generated in the build directory
#include <frequency_modulator_fc_pydoc.h>

void bind_frequency_modulator_fc(py::module& m)
{

    using frequency_modulator_fc = ::gr::analog::frequency_modulator_fc;


    py::class_<frequency_modulator_fc,
               gr::sync_block,
               gr::block,
               gr::basic_block,
               std::shared_ptr<frequency_modulator_fc>>(
        m, "frequency_modulator_fc", D(frequency_modulator_fc))

        .def(py::init(&frequency_modulator_fc::make),
             py::arg("sensitivity"),
             D(frequency_modulator_fc, make))


        .def("set_sensitivity",
             &frequency_modulator_fc::set_sensitivity,
             py::arg("sens"),
             D(frequency_modulator_fc, set_sensitivity))


        .def("sensitivity",
             &frequency_modulator_fc::sensitivity,
             D(frequency_modulator_fc, sensitivity))

        ;
}