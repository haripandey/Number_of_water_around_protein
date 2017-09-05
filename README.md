# Number_of_water_around_protein
This repository can found the number of water molecule within the distance of protein and detremine at what distance all water molceule can be found over the simulation at each ps time step. This will plot a graph if xmgrace is installed and will determine if the simulation has any evaporation or not.
The main file is "Calculated_all_water_at_ps.bash". its a tiny bash script
There is another file which has gromacs select script, "RUN_SELECT"
go to that file and change the name of ".trr" and ".tpr" file.
do "./Calculated_all_water_at_ps.bash" in the terminal. It will run a "select_ps_timesteps_value.cpp" file, a "generate_number.py" and run a GROMACS script. Finally this will give a file "alldistances.txt" and plot in xmgrace.
Make sure all of these file  and your gromacs *.trr* and *.trp" files are in working directory.
You will get an graph and and distace vs. ps time data file.
For thsi please further edit the RUN_SELECT file use (-dt ) flag there if you have saved trajectory at less than 1 ps. For eample if you have saved trajectory at each 0.5 ps say you will get more data points but is a time consuming wor. Use -dt flag to save time.
From the xamgrace figure, clearly we can see what is the distance at each pecosecond we can find all water.
If there are large fluctuations at the end of simulation, the sistem is blowing up or evaporating.
If fluctuations are relaxed below 1 angstrong (say) then the simulation is fine. It will plroduce realistic reasults from the simulation.
If the fluctuations are large, even at the end of simulation . repeat the simulation again.
For example, we perform 10ns simulations, these fluctuations relaxed only after 5ns the do the calculations on later 5ns and do not include ist 5 ns. Then calculations will give better results.
