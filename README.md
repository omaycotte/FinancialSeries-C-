# FinancialSeries-CPP

Basic Financial Analysis Algorithms in C++

I here you'll find basic application of Time Value Money and Bond Valuation

For this code to work, all you need to do is to create a project if you are using Visual Studio, a Makefile if you are in any Linux variant, or take the code as it is and drop it in a Visual Code project / workspace

There are 3 folders here, each has a small example of most common applications in Financial Engineering
tvm         - Explains Time Value of Money
annuity     - Explains the use of an annuity to value a bond
settlement  - Explains how to value a bond when the settlement date fallws between coupon dates


VS Code workspace structure:<br/>
&nbsp;&nbsp;ws-folder/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;|-  .vscode/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|- c_cpp_properties.json<br/>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|- launch.json<br/>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|- tasks.json<br/>
&nbsp;&nbsp;&nbsp;&nbsp;|-  tvm/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;|-  annuity/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;|-  settlement/<br/>
  
  
  Required:<br/>
  c++ clang-1000.10.44.4<br/>
  g++ <br/>
  <br/>
  std-c++17<br/>
  std-c11<br/>
  
