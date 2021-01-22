# 100 Days Of Code - Log

### Day 14: January 22th, 2021
**Today's Progress:** Came to the realization that I feature-creep my own projects as I'm writing them.

**Thoughts:** I need to start over again. I need to scale back even further and define a bare-bones concept of what the end result will be. Minimal graphics. Pure functionality. Bells and whistles must be forcefully postponed for later. Don't think about what will be needed in the end. Don't think about future-proofing. Just get things done.

### Day 13: January 21th, 2021
**Today's Progress:** Began working on [Kobold Mastermind](https://github.com/erifo/kobold-mastermind). Created a main menu that did different things based on what was selected. Reused old code with a new structure.

**Thoughts:** The Emblem Clone idea was growing stale, and kept demotivating me to continue. Instead I'm beginning anew with a different approach. I improve at a steadier pace if I throw things together until it works, and then remake it from scratch. That's why the goal this time will be "ugly, but feature complete".

### Day 12: January 20th, 2021
**Today's Progress:** Made plans and considered options for overall architecture of [Emblem Clone](https://github.com/erifo/emblem-clone).

**Thoughts:** I keep finding that the type of problem I enjoy solving the most is the one which removes any future problem. Were I to implement all the features I wanted right away, I'd most certainly would end up with a tangled mess of dependenciesm, not to mention headache if I decided to change an aspect of it. Instead I'd much rather figure out a clean and logical system now and happily have everything "just work" later. Due to this, there are days where very little code gets written.

### Day 11: January 19th, 2021
**Today's Progress:** Made menu options selectable using arrow keys.

**Thoughts:** Not very enthusiastic today, but I at least got something done. Procrastinating submenus.

### Day 10: January 18th, 2021
**Today's Progress:** Wrote a toggle-able menu, following the Model-View-Controller design, that only takes input when open and automatically adjusts its size to the content.

**Thoughts:** It's not yet ready to be merged with the [Emblem Clone](https://github.com/erifo/emblem-clone), but it's a huge step on the way! Next step should be nesting menus and actually include the end-points that they lead to. Game options, character screen, inventory, save/load menu, etc.

### Day 9: January 17th, 2021
**Today's Progress:** Made a fresh start with a GUI test project in parallel with the [Emblem Clone](https://github.com/erifo/emblem-clone).

**Thoughts:** Had to stop midway since it was getting late. I'm hoping this new architecture will be more intuitive and decoupled than the previous.

### Day 8: January 16th, 2021
**Today's Progress:** Created toggle-able debug mode for the [Sudoku Solver](https://github.com/erifo/sudoku-solver) and wrote function to get the solution as a string to be used elsewhere. 

**Thoughts:** Losing a bit of steam lately. Could be fatigue from other events, simply apprehension to tackle untried problems. I don't want this to become a chore, because then I might begin cutting corners. Picked up a PDF about design patterns that I want to try making examples from.

### Day 7: January 15th, 2021
**Today's Progress:** Updated my [Sudoku Solver](https://github.com/erifo/sudoku-solver) with a recursive solving method if the more sophisticated ones fail. Attemped a solution for recognizing sudoku from photos, but it required downgrading to python 3.8 among other things I didn't feel worth attempting.

**Thoughts:** It's not intended as a crutch, but rather a complementary last step for whatever few cells remain unsolvable by my other algorithms. Since it was a while since I worked in this project, I also got a better look at how messy the program is. Might take one of these days to refactor it.

### Day 6: January 14th, 2021
**Today's Progress:** Wrote draft classes for [Emblem Clone](https://github.com/erifo/emblem-clone) GUI.

**Thoughts:** No idea what I'm doing, but that's part of the fun. Trying to improvise the system on the spot, but i didn't get as far as that method usually brings me. I might look for a tutorial or example for how to structure game menus tomorrow.

### Day 5: January 13th, 2021
**Today's Progress:** Reorganized the class hierarchy to allow for textures instead of solid colors for everything. Also added randomized unit generation!

**Thoughts:** The skeleton is coming together. Next big step will be menus and other GUI components. After that I'll finally be able to work on combat!

### Day 4: January 12th, 2021
**Today's Progress:** Continued with the [Emblem Clone](https://github.com/erifo/emblem-clone). Implemented grid movement for the player and collision detection for walls and impassable terrain. Also some crude sprite import and rendering for the player.

**Thoughts:** Prototyping is so much quicker with Python. I feel like my ideas get from thought to working code quick enough that I may as well not be typing at all. Was really tired when I wrote the sprite usage, so gotta clean that up before I continue.

### Day 3: January 11th, 2021
**Today's Progress:** Completely stuck on how to make my exe run independently from Code::Blocks. Static linking causes 50+ build errors of "undefined reference to ___________". Searching for others with similar past issues has not helped, and I am mentally tired of not being able to just write some code already. Scrapped the idea of C++ and instead worked on separating my old [Maze Constructor](https://github.com/erifo/maze-constructor) into logic and graphics. Also begun writing a pygame clone of [Fire Emblem](https://github.com/erifo/emblem-clone)!

**Thoughts:** Switching to Python felt like a breath of fresh air after the last two days. Tinkering with game logic is a billion times more exciting than solving linking errors. At least it raised my resilience against irritation.

### Day 2: January 10th, 2021
**Today's Progress:** Successfully installed 64-bit version of SDL2 for use with Code::Blocks.

**Thoughts:** Initially installed 32-bit ver upon recommendation from LazyFoo tutorial, but that proved to cause several unexplainable errors. Just setting everything up is proving to be a lot more mentally taxing that I enticipated. Looking forward to begin designing and writing the actual code. The key aspect I want to achieve is a scalable design pattern that avoids bad practices. After that I'll try making something fun to play!

### Day 1: January 9th, 2021
**Today's Progress:** Decided to begin this challenge by getting comfortable with C++. Easier said than done, but managed to wrangle Code::Blocks into successfully compiling multiple files into one standalone exe.

**Thoughts:** C++ is a stickler for details. It both want and requires them. The syntax, the linking, the flags, the config files. It all feels very overwhelming in comparison to, say, Python. Also not a fan of how the nature of .cpp and .h files forces me to repeat myself a lot, and potentially make mistakes while doing so.