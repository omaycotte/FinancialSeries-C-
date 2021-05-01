# FinancialSeries-CPP

Basic Financial Analysis Algorithms in C++

As the title states, these are common basic algorithms that you'd find in most any Financial Engineering Application

For this code to work, all you need to do is to create a project if you are using Visual Studio, a Makefile if you are in any Linux variant, or simply take the code as it is and drop it in a Visual Code project / workspace

Each folder contains a small example of most common applications in Financial Engineering<br/>
tvm         - Explains Time Value of Money<br/>
annuity     - Explains the use of an annuity to value a bond<br/>
settlement  - Explains how to value a bond when the settlement date fallws between coupon dates<br/>


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
  

Reference:<br/>
Fixed Income Analysis, 2nd Edition<br/>
Frank J. Fabozzi<br/>
<br/>
The Handbook of Fixed Income Securities, 6th Edition<br/>
Frank J. Fabozzi<br/>
<br/>
A Primer for the Mathematics of Financial Engineering<br>
Dan Stefanica<br>
<br>
Monte Carlo Methods in Financial Engineering<br>
Paul Glasserman<br>
