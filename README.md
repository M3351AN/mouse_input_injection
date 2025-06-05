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

This project is licensed under [**TOSSUCU**](LICENSE).
```diff
+ You are free to:
	• Use: Utilize the software for any purpose not explicitly restricted
	• Copy: Reproduce the software without limitation
	• Modify: Create derivative works through remixing/transforming
	• Merge: Combine with other materials
	• Publish: Display/communicate the software publicly
	• Distribute: Share copies of the software

+ Under the following terms:
	• Attribution: Must include copyright notice and this license in all copies
	• Waifu Clause: Don't consider the author as your waifu

- You are not allowed to:
	• Sublicense: Cannot grant sublicenses for original/modified material

```
## Credits

Inspired by [Zpes](https://github.com/Zpes)' [mouse-input-injection](https://github.com/Zpes/mouse-input-injection).


