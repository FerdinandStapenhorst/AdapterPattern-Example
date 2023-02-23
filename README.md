# AdapterPattern
This example ilustrates the Adapter design pattern (https://refactoring.guru/design-patterns/adapter).
## Description
The example uses the context of a energy consumption service. The service provides an interface where you can query the consumed energy of some consumer. The return data of this interface is a data structure containing milliampere, volt and elapsed time in seconds. Depending on the consumer of this interface, these values make sense.

When dealing with electric vehicles though, the typical data used when it comes to consumed energy is kWh using a floating point value.
The example illustrates an adapter that converts the data coming from the domain to kWh.

## Graphical Schema
The schema used here is the hexagon (which refers to the Hexagonal Architecture https://jmgarridopaz.github.io/content/hexagonalarchitecture.html)
![Ports and Adapter Example](https://user-images.githubusercontent.com/118904606/220935246-a6420951-ded2-42c9-9307-0358b39d25da.png)

## The Code
The code uses the Domain Driven Development concept.
### The Domain
The domain simply has one interface (the port interface IEnergyInfoPort) which exports one method:
* ToString() returning a formatted string

### The Adapters
There are two adapters:
* IEnergyAdapter
* IEvEnergyAdapter

The first adapter (EnergyAdapter) implements the IEnergyAdapter interface which gets injected at construction of the Adapter instance. It exports the interface method ToString() which returns a formatted string like "Consumed 16000mA at 240V for 7200 seconds."
The second Adapter (EvEnergyAdapter) implements the IEnergyAdapter interface which also gets injected at construction of the Adapter instance.
Its ToString() method returns a string like "Consumed 1.92kWh"

Both adapters use a single port to get their data and transform it to the respective format using the ToString() method.
