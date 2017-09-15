/*
 *  Author: bwilliams
 *  Created: April 6, 2012
 *
 *  Copyright (c) 2012 Vmware, Inc.  All rights reserved.
 *  -- VMware Confidential
 *
 *  This code was generated by the script "build/dev/codeGen/genCppXml". Please
 *  speak to Brian W. before modifying it by hand.
 *
 */

#ifndef ResponseXmlRoots_h_
#define ResponseXmlRoots_h_


#include "Doc/ResponseDoc/CErrorResponseDoc.h"

#include "Doc/DocXml/ResponseXml/ResponseXmlLink.h"
#include "Doc/ResponseDoc/CProviderEventResponseDoc.h"
#include "Doc/ResponseDoc/CProviderResponseDoc.h"
#include "Doc/ResponseDoc/CResponseDoc.h"

namespace Caf {

	namespace XmlRoots {

		/// Saves the ErrorResponseDoc to a string.
		std::string RESPONSEXML_LINKAGE saveErrorResponseToString(
			const SmartPtrCErrorResponseDoc errorResponseDoc);

		/// Parses the ErrorResponseDoc from the string.
		SmartPtrCErrorResponseDoc RESPONSEXML_LINKAGE parseErrorResponseFromString(
			const std::string xml);

		/// Saves the ErrorResponseDoc to a file.
		void RESPONSEXML_LINKAGE saveErrorResponseToFile(
			const SmartPtrCErrorResponseDoc errorResponseDoc,
			const std::string filePath);

		/// Parses the ErrorResponseDoc from the file.
		SmartPtrCErrorResponseDoc RESPONSEXML_LINKAGE parseErrorResponseFromFile(
			const std::string filePath);

		/// Saves the ProviderResponseDoc to a string.
		std::string RESPONSEXML_LINKAGE saveProviderResponseToString(
			const SmartPtrCProviderResponseDoc providerResponseDoc);

		/// Parses the ErrorResponseDoc from the string.
		SmartPtrCProviderResponseDoc RESPONSEXML_LINKAGE parseProviderResponseFromString(
			const std::string xml);

		/// Saves the ProviderResponseDoc to a file.
		void RESPONSEXML_LINKAGE saveProviderResponseToFile(
			const SmartPtrCProviderResponseDoc providerResponseDoc,
			const std::string filePath);

		/// Parses the ErrorResponseDoc from the file.
		SmartPtrCProviderResponseDoc RESPONSEXML_LINKAGE parseProviderResponseFromFile(
			const std::string filePath);

		/// Saves the ResponseDoc to a string.
		std::string RESPONSEXML_LINKAGE saveResponseToString(
			const SmartPtrCResponseDoc responseDoc);

		/// Parses the ErrorResponseDoc from the string.
		SmartPtrCResponseDoc RESPONSEXML_LINKAGE parseResponseFromString(
			const std::string xml);

		/// Saves the ResponseDoc to a file.
		void RESPONSEXML_LINKAGE saveResponseToFile(
			const SmartPtrCResponseDoc responseDoc,
			const std::string filePath);

		/// Parses the ErrorResponseDoc from the file.
		SmartPtrCResponseDoc RESPONSEXML_LINKAGE parseResponseFromFile(
			const std::string filePath);

		/// Saves the ProviderEventResponseDoc to a string.
		std::string RESPONSEXML_LINKAGE saveProviderEventResponseToString(
			const SmartPtrCProviderEventResponseDoc providerEventResponseDoc);

		/// Parses the ErrorResponseDoc from the string.
		SmartPtrCProviderEventResponseDoc RESPONSEXML_LINKAGE parseProviderEventResponseFromString(
			const std::string xml);

		/// Saves the ProviderEventResponseDoc to a file.
		void RESPONSEXML_LINKAGE saveProviderEventResponseToFile(
			const SmartPtrCProviderEventResponseDoc providerEventResponseDoc,
			const std::string filePath);

		/// Parses the ErrorResponseDoc from the file.
		SmartPtrCProviderEventResponseDoc RESPONSEXML_LINKAGE parseProviderEventResponseFromFile(
			const std::string filePath);
	}
}

#endif /* ResponseXmlRoots_h_ */