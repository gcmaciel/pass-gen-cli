# pass-gen-cli

**pass-gen-cli** is a command-line program to generate random passwords. It was designed to include one capitalized letter, one special character and lower case letters.

## Motivation

I decided to make this program because I always took too long to create passwords from my head.

Of course there are lots of passwords generators out there but I wanted to write one myself :slightly_smiling_face:.

## Usage

To use this program is quite simple. It takes one argument (which is a number) to tell the program the length of the password you want. A new password is generated and shown as an output.

#### Example

This generates a 20 characters password...
```bash
$ ./password 20
```
...like this
```bash
U$0ptkjmixepvjxujodu
```

#### Installation

```bash
$ git clone https://github.com/gcmaciel/pass-gen-cli.git
```

## Contributing

Fell free to [open issues, bugs, feature requests](https://github.com/gcmaciel/pass-gen-cli/issues) or [contribute to code](https://github.com/gcmaciel/pass-gen-cli/pulls).

#### Prerequisites

Ensure your have a compiler installed (like `gcc` or `clang`).

## License

This project is open source and available under the [MIT license](LICENSE).
