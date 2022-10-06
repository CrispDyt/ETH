# Programming Techniques for Scientific Simulations, ETH Zürich

set title 'Simpson rule: convergence for I=int sin(x)dx over [0, PI]'
set xlabel 'Resolution N'
set ylabel "Integral\nvalue I" offset 5,0.5 rotate by 0
set lmargin 14

set yrange [1.999:]
#~ set log x
set grid
set key box

set terminal png
set output 'data/convergence.png'

plot 'data/results.txt' title 'libintegrate.a results' with linespoints,\
     2 title 'analytic solution'
