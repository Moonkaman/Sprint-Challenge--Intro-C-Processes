**1. List all of the main states a process may be in at any point in time on a standard Unix system. Briefly explain what each of these states means.**

- New - Process is about to be created and will be picked up by OS to be created.

- Ready - Process has been created and is loaded into memory waiting to get CPU time for it's execution.

- Run - The process gets it's execution time in the cpu and is being run.

- Terminated / Completed - Process is done running and is terminated.

- Suspended - Process is waiting for child process to finish running.

- Zombie - Process is done running and is waiting to be cleaned up by parent.

**2. What is a zombie process?**

- A process that has finished executing but has not yet been cleaned up.

**3. How does a zombie process get created? How does one get destroyed?**

- it gets created when the parent fails to do it's job and clean up the child after it's done executing, it gets cleaned up by being adopted by the "main" process and then it becomes that proccesses job to clean it up.

**4. What are some of the benefits of working in a compiled language versus a non-compiled language? More specifically, what benefits are there to be had from taking the extra time to compile our code?**

- errors can get caught before runtime thus saving us time in the end. Also they compile down to assembly code so they tend to be faster and more efficient. You also get more control over things like memory management and cpu usage.
