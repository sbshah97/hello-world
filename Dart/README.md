# Getting Started

## Installing Dart
Go [here](https://www.dartlang.org/install) to get more detailed instructions if below doesn't help you.

### [Windows](https://www.dartlang.org/install/windows) 
- Use the [community supported Dart installer](http://www.gekorm.com/dart-windows/)
- Or instead with [Chocolatey](https://chocolatey.org/) run
	```bash
	choco install dart-sdk
	```

### [Mac](https://www.dartlang.org/install/mac)
- Using homebrew run
	```bash
	$ brew tap dart-lang/dart
	$ brew install dart
	```

### [Linux](https://www.dartlang.org/install/linux)
- Dartlang provides a small setup script for installing with apt-get
	```bash
	# Enable HTTPS for apt.
	$ sudo apt-get update
	$ sudo apt-get install apt-transport-https
	# Get the Google Linux package signing key.
	$ sudo sh -c 'curl https://dl-ssl.google.com/linux/linux_signing_key.pub | apt-key add -'
	# Set up the location of the stable repository.
	$ sudo sh -c 'curl https://storage.googleapis.com/download.dartlang.org/linux/debian/dart_stable.list > /etc/apt/sources.list.d/dart_stable.list'
	$ sudo apt-get update
	```
	then run
	```bash
	$ sudo apt-get install dart
	```

## Running Hello-World
1. Navigate to the directory containing hello-world.dart.  
2. `dart hello-world.dart`