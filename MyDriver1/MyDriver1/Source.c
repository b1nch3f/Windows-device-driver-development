#include <ntddk.h>

void Unload(IN PDRIVER_OBJECT DriverObject) {
	DbgPrint("driver unload\n");
}

NTSTATUS DriverEntry(IN PDRIVER_OBJECT DriverObject, IN PUNICODE_STRING RegistryPath)
{
	DriverObject->DriverUnload = Unload;

	// NTSTATUS variable to record success or failure
	NTSTATUS status = STATUS_SUCCESS;

	// Print "Hello World" for DriverEntry
	//KdPrintEx((DPFLTR_IHVDRIVER_ID, DPFLTR_INFO_LEVEL, "KmdfHelloWorld: DriverEntry\n"));
	DbgPrint("hello-world\n");
	return status;
}