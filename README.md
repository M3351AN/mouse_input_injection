# Mouse Input Injection
A lightweight, header-only alternative for emulating mouse movements and actions.

---

## Features

- Utilizes the undocumented `NtUserInjectMouseInput` syscall.  
- Usage is identical to the `mouse_event` function in the Windows API.  
- Header-only design makes it easy to integrate into your program.

## Usage

- Download and include the `mouse_input_injection.h` header in your project.  
- Replace calls to `mouse_event` with `my_mouse_event`.

## License

This project is licensed under [**TOSSUCU License 2025.9**](LICENSE).

## Credits

Inspired by [Zpes](https://github.com/Zpes)' [mouse-input-injection](https://github.com/Zpes/mouse-input-injection).


