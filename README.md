# AdapterPattern
This example ilustrates the Adapter design pattern (https://refactoring.guru/design-patterns/adapter).
## Description
The example uses the context of a energy consumption service. The service provides an interface where you can query the consumed energy of some consumer. The return data of this interface is a data structure containing milliampere, volt and elapsed time in seconds. Depending on the consumer of this interface, these values make sense.

When dealing with electric vehicles though, the typical data used when it comes to consumed energy is kWh using a floating point value.
The example illustrates an adapter that converts the data coming from the domain to kWh.

## Graphical Schema
The schema used here is the hexagon (which refers to the Hexagonal Architecture https://jmgarridopaz.github.io/content/hexagonalarchitecture.html)
![Ports   Adapter Example - AdapterDesignPattern](https://user-images.githubusercontent.com/118904606/217805448-d29d3c92-44be-4404-9f45-ecceb19a5d5e.png)

## The Code
The code uses the Domain Driven Development concept.
### The Domain
The domain simply has one interface (the port interface IEnergyInfo) which exports two methods:
* ConsumedEnergy() returning the ConsumptionData type
* ToString() returning a formatted string

### The Adapter
The adapter (EvEnergyInfo) implements the IEnergyInfo interface which gets injected at construction of an Adapter instance. It exports the interface IEvConsumedEnergy which exports two methods::
*  ConsumedEnergy() returning the EvConsumptionData type
* ToString() returning a formatted string

