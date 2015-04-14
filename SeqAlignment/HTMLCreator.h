#ifndef HTML_CREATOR_H_
#define HTML_CREATOR_H_

#include <iostream>
#include <map>
#include <string>
#include <vector>

#include "../vcflib/src/Variant.h"

void writeHeader(std::ostream& output);


void writeReferenceString(std::string& reference_string, 
			  std::ostream& output, 
			  std::string locus_id, 
			  std::vector<bool>& within_locus, 
			  bool draw_locus_id);


void writeAlignmentStrings(std::string& reference_string, 
			   std::ostream& output, 
			   std::string locus_id,
			   std::vector<std::string>& alignment_strings, 
			   std::vector<std::string>& alignment_samples, 
			   vcf::VariantCallFile* vcf_data, 
			   std::map<std::string, std::string>& sample_info,
			   bool highlight);

#endif
