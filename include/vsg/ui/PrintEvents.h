#pragma once

/* <editor-fold desc="MIT License">

Copyright(c) 2018 Robert Osfield

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

</editor-fold> */

#include <vsg/core/Visitor.h>
#include <vsg/ui/UIEvent.h>

namespace vsg
{
    class PrintEvents : public Inherit<vsg::Visitor, PrintEvents>
    {
    public:
        PrintEvents(vsg::clock::time_point in_start_point);

        vsg::clock::time_point start_point;

        void apply(vsg::UIEvent& event) override;
        void apply(vsg::FrameEvent& event) override;
        void apply(vsg::ExposeWindowEvent& event) override;
        void apply(vsg::CloseWindowEvent& event) override;
        void apply(vsg::KeyReleaseEvent& keyRelease) override;
        void apply(vsg::KeyPressEvent& keyPress) override;
        void apply(vsg::ButtonPressEvent& buttonPress) override;
        void apply(vsg::ButtonReleaseEvent& buttonRelease) override;
        void apply(vsg::MoveEvent& move) override;
        void apply(vsg::ScrollWheelEvent& scrollWheel) override;
    };
} // namespace vsg
