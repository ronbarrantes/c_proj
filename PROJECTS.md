# C Learning Path

Build these in order. Each project should reuse something from the previous ones while adding one or two new ideas.

## Main Path

1. Number guessing game
   - Practice: loops, conditionals, functions, input validation, random numbers.

2. Calculator
   - Practice: menus, `switch`, functions, repeated input, error handling.

3. `todo.md` app
   - Practice: structs, arrays, strings, reading and writing files.
   - Store tasks as markdown-style lines like `- [ ] learn fgets`.

4. Log parser
   - Practice: line-by-line file reading, string searching, counters, simple parsing.

5. Hex viewer for files
   - Practice: binary file reading, bytes, offsets, formatting output.

6. Parse a simple file format and harden it
   - Practice: defensive parsing, malformed input, bounds checks, clean failure paths.

7. SDL2 moving square
   - Practice: using a library, opening a window, event loops, keyboard input, drawing.

8. Pong
   - Practice: game state, frame timing, collision checks, simple scoring.

9. Snake
   - Practice: arrays of positions, grid movement, input timing, growing state.

10. Tiny text editor
   - Practice: larger program structure, buffers, cursor movement, editing state.

11. Todo list TUI
   - Practice: `ncurses`, keyboard input, screen redraws, interactive state.

12. File browser
   - Practice: directories, file metadata, navigation, terminal UI organization.

13. TCP echo client
    - Practice: sockets, IP addresses, ports, `connect`, `send`, `recv`.

14. TCP echo server
    - Practice: `socket`, `bind`, `listen`, `accept`, server loops.

15. Tiny HTTP server that serves one HTML file
    - Practice: request parsing, response formatting, simple protocol handling.

16. HTTP request inspector
    - Practice: parsing headers, printing structured network data.

17. Multi-client chat
    - Practice: multiple connections, `select` or `poll`, message handling.

18. Basic port scanner using `connect`
    - Practice: networking loops, timeouts, connection errors.

19. DNS lookup toy
    - Practice: name resolution, network APIs, binary protocol basics if you go deeper.

20. Packet sniffer with `libpcap`
    - Practice: packet capture, Ethernet/IP/TCP headers, permissions, filters.

21. Bluetooth experiments
    - Practice: OS-specific APIs, hardware behavior, scanning, lower-level protocols.

## Side Quests

These are useful, but they branch into graphics, games, or security. Do them when you want variety without abandoning the main path.

- Breakout
- Paint program with mouse input
- Particle simulator
- Software renderer: draw pixels, lines, triangles yourself
- Wireframe cube
- Tiny Doom-style raycaster
- Terminal dashboard that checks local services
- `ncurses` roguelike: move `@` around a map
- Write unsafe string copy examples, then inspect crashes
- Build a deliberately vulnerable login checker, then fix it
- Write a toy fuzzer that feeds random input to your parser
- Make a tiny password vault using file encryption later
