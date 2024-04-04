#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib> // For system() function

// Function to open HTML file in default web browser
void openInBrowser(const std::string& fileName) {
#ifdef _WIN32
    std::string command = "start " + fileName;
#elif __linux__
    std::string command = "xdg-open " + fileName;
#elif __APPLE__
    std::string command = "open " + fileName;
#else
    std::string command = "xdg-open " + fileName; // For other Unix-like systems
#endif

    // Execute the command
    system(command.c_str());
}

int main() {
    // Specify the file name
    std::string fileName = "survey_form.html";

    // Open an output file stream
    std::ofstream outputFile(fileName);

    // Check if the file stream is open
    if (outputFile.is_open()) {
        // Write the HTML content to the file
        outputFile << "<!DOCTYPE html>\n";
        outputFile << "<html lang=\"en\">\n";
        outputFile << "<head>\n";
        outputFile << "<meta charset=\"UTF-8\">\n";
        outputFile << "<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n";
        outputFile << "<title>Cloud Computing Tools and Programming Languages Survey</title>\n";
        outputFile << "<style>\n";
        outputFile << "body { background-color: #05c46b; }\n"; // Green background color
        outputFile << "</style>\n";
        outputFile << "</head>\n";
        outputFile << "<body>\n";
        outputFile << "<h1>Cloud Computing Tools and Programming Languages Survey</h1>\n";
        outputFile << "<p>Dear Participant,</p>\n";
        outputFile << "<p>Thank you for taking the time to participate in this survey on cloud computing tools and programming languages. Your insights will help us understand the usage patterns and preferences in the field of cloud computing. Please provide your responses to the following questions.</p>\n";

        // Section 1: Infrastructure Management Tools
        outputFile << "<h2>Section 1: Infrastructure Management Tools</h2>\n";
        outputFile << "<h3>Amazon Web Services (AWS):</h3>\n";
        outputFile << "<p>How familiar are you with AWS services, such as computing power, storage, and databases?</p>\n";
        outputFile << "<input type=\"radio\" id=\"aws_familiarity_1\" name=\"aws_familiarity\" value=\"Not familiar at all\"><label for=\"aws_familiarity_1\">Not familiar at all</label><br>\n";
        outputFile << "<input type=\"radio\" id=\"aws_familiarity_2\" name=\"aws_familiarity\" value=\"Somewhat familiar\"><label for=\"aws_familiarity_2\">Somewhat familiar</label><br>\n";
        outputFile << "<input type=\"radio\" id=\"aws_familiarity_3\" name=\"aws_familiarity\" value=\"Very familiar\"><label for=\"aws_familiarity_3\">Very familiar</label><br>\n";
        outputFile << "<p>Have you used AWS for building cloud-based applications or services?</p>\n";
        outputFile << "<input type=\"radio\" id=\"aws_usage_yes\" name=\"aws_usage\" value=\"Yes\"><label for=\"aws_usage_yes\">Yes</label><br>\n";
        outputFile << "<input type=\"radio\" id=\"aws_usage_no\" name=\"aws_usage\" value=\"No\"><label for=\"aws_usage_no\">No</label><br>\n";
        outputFile << "<p>If yes, which AWS services have you primarily utilized? (Check all that apply)</p>\n";
        outputFile << "<input type=\"checkbox\" id=\"aws_service_computing\" name=\"aws_service\" value=\"Computing\"><label for=\"aws_service_computing\">Computing (e.g., EC2, Lambda)</label><br>\n";
        outputFile << "<input type=\"checkbox\" id=\"aws_service_storage\" name=\"aws_service\" value=\"Storage\"><label for=\"aws_service_storage\">Storage (e.g., S3, EBS)</label><br>\n";
        outputFile << "<input type=\"checkbox\" id=\"aws_service_databases\" name=\"aws_service\" value=\"Databases\"><label for=\"aws_service_databases\">Databases (e.g., RDS, DynamoDB)</label><br>\n";
        outputFile << "<input type=\"checkbox\" id=\"aws_service_networking\" name=\"aws_service\" value=\"Networking\"><label for=\"aws_service_networking\">Networking (e.g., VPC, Route 53)</label><br>\n";
        outputFile << "<input type=\"checkbox\" id=\"aws_service_others\" name=\"aws_service\" value=\"Others\"><label for=\"aws_service_others\">Others (Please specify)</label><br>\n";
        outputFile << "<textarea id=\"aws_service_others_specification\" name=\"aws_service_others_specification\" placeholder=\"Specify other AWS services\"></textarea><br>\n";

        // Microsoft Azure
        outputFile << "<h3>Microsoft Azure:</h3>\n";
        outputFile << "<p>Have you utilized Microsoft Azure for cloud computing purposes?</p>\n";
        outputFile << "<input type=\"radio\" id=\"azure_usage_yes\" name=\"azure_usage\" value=\"Yes\"><label for=\"azure_usage_yes\">Yes</label><br>\n";
        outputFile << "<input type=\"radio\" id=\"azure_usage_no\" name=\"azure_usage\" value=\"No\"><label for=\"azure_usage_no\">No</label><br>\n";
        outputFile << "<p>If yes, which Azure services have you used or deployed applications on?</p>\n";
        outputFile << "<textarea id=\"azure_services_used\" name=\"azure_services_used\" placeholder=\"List Azure services used\"></textarea><br>\n";

        // Section 2: Deployment and Orchestration Tools
        outputFile << "<h2>Section 2: Deployment and Orchestration Tools</h2>\n";
        outputFile << "<h3>Google Cloud Platform (GCP):</h3>\n";
        outputFile << "<p>How familiar are you with Google Cloud Platform (GCP) services, such as Compute Engine?</p>\n";
        outputFile << "<input type=\"radio\" id=\"gcp_familiarity_1\" name=\"gcp_familiarity\" value=\"Not familiar at all\"><label for=\"gcp_familiarity_1\">Not familiar at all</label><br>\n";
        outputFile << "<input type=\"radio\" id=\"gcp_familiarity_2\" name=\"gcp_familiarity\" value=\"Somewhat familiar\"><label for=\"gcp_familiarity_2\">Somewhat familiar</label><br>\n";
        outputFile << "<input type=\"radio\" id=\"gcp_familiarity_3\" name=\"gcp_familiarity\" value=\"Very familiar\"><label for=\"gcp_familiarity_3\">Very familiar</label><br>\n";
        outputFile << "<p>Have you utilized Compute Engine on Google Cloud Platform for managing virtual machines (VMs)?</p>\n";
        outputFile << "<input type=\"radio\" id=\"gcp_compute_engine_usage_yes\" name=\"gcp_compute_engine_usage\" value=\"Yes\"><label for=\"gcp_compute_engine_usage_yes\">Yes</label><br>\n";
        outputFile << "<input type=\"radio\" id=\"gcp_compute_engine_usage_no\" name=\"gcp_compute_engine_usage\" value=\"No\"><label for=\"gcp_compute_engine_usage_no\">No</label><br>\n";

        // Docker
        outputFile << "<h3>Docker:</h3>\n";
        outputFile << "<p>How familiar are you with Docker and containerization concepts?</p>\n";
        outputFile << "<input type=\"radio\" id=\"docker_familiarity_1\" name=\"docker_familiarity\" value=\"Very familiar\"><label for=\"docker_familiarity_1\">Very familiar</label><br>\n";
        outputFile << "<input type=\"radio\" id=\"docker_familiarity_2\" name=\"docker_familiarity\" value=\"Somewhat familiar\"><label for=\"docker_familiarity_2\">Somewhat familiar</label><br>\n";
        outputFile << "<input type=\"radio\" id=\"docker_familiarity_3\" name=\"docker_familiarity\" value=\"Not familiar\"><label for=\"docker_familiarity_3\">Not familiar</label><br>\n";
        outputFile << "<p>Have you used Docker for packaging and deploying applications in containerized environments?</p>\n";
        outputFile << "<input type=\"radio\" id=\"docker_usage_yes\" name=\"docker_usage\" value=\"Yes\"><label for=\"docker_usage_yes\">Yes</label><br>\n";
        outputFile << "<input type=\"radio\" id=\"docker_usage_no\" name=\"docker_usage\" value=\"No\"><label for=\"docker_usage_no\">No</label><br>\n";
        outputFile << "<p>If yes, what benefits have you observed in using Docker for application deployment?</p>\n";
        outputFile << "<textarea id=\"docker_benefits\" name=\"docker_benefits\" placeholder=\"List benefits observed in using Docker\"></textarea><br>\n";

        // Kubernetes
        outputFile << "<h3>Kubernetes:</h3>\n";
        outputFile << "<p>Have you worked with Kubernetes for container orchestration?</p>\n";
        outputFile << "<input type=\"radio\" id=\"kubernetes_usage_yes\" name=\"kubernetes_usage\" value=\"Yes\"><label for=\"kubernetes_usage_yes\">Yes</label><br>\n";
        outputFile << "<input type=\"radio\" id=\"kubernetes_usage_no\" name=\"kubernetes_usage\" value=\"No\"><label for=\"kubernetes_usage_no\">No</label><br>\n";
        outputFile << "<p>If yes, what challenges, if any, have you encountered while using Kubernetes for managing containerized workloads?</p>\n";
        outputFile << "<textarea id=\"kubernetes_challenges\" name=\"kubernetes_challenges\" placeholder=\"List challenges encountered in using Kubernetes\"></textarea><br>\n";

        // Google Cloud Platform (GCP) - App Engine
        outputFile << "<h3>Google Cloud Platform (GCP):</h3>\n";
        outputFile << "<p>Have you used Google App Engine for deploying and managing applications without managing the underlying infrastructure?</p>\n";
        outputFile << "<input type=\"radio\" id=\"gcp_app_engine_usage_yes\" name=\"gcp_app_engine_usage\" value=\"Yes\"><label for=\"gcp_app_engine_usage_yes\">Yes</label><br>\n";
        outputFile << "<input type=\"radio\" id=\"gcp_app_engine_usage_no\" name=\"gcp_app_engine_usage\" value=\"No\"><label for=\"gcp_app_engine_usage_no\">No</label><br>\n";

        // Section 3: Monitoring and Logging Tools
        outputFile << "<h2>Section 3: Monitoring and Logging Tools</h2>\n";
        outputFile << "<h3>Prometheus:</h3>\n";
        outputFile << "<p>Are you familiar with Prometheus for monitoring cloud-based applications and infrastructure?</p>\n";
        outputFile << "<input type=\"radio\" id=\"prometheus_familiarity_yes\" name=\"prometheus_familiarity\" value=\"Yes\"><label for=\"prometheus_familiarity_yes\">Yes</label><br>\n";
        outputFile << "<input type=\"radio\" id=\"prometheus_familiarity_no\" name=\"prometheus_familiarity\" value=\"No\"><label for=\"prometheus_familiarity_no\">No</label><br>\n";
        outputFile << "<p>If yes, how do you typically use Prometheus in your monitoring stack?</p>\n";
        outputFile << "<textarea id=\"prometheus_usage\" name=\"prometheus_usage\" placeholder=\"Describe typical use of Prometheus\"></textarea><br>\n";

        // Grafana
        outputFile << "<h3>Grafana:</h3>\n";
        outputFile << "<p>Have you utilized Grafana for visualizing metrics and creating dashboards?</p>\n";
        outputFile << "<input type=\"radio\" id=\"grafana_usage_yes\" name=\"grafana_usage\" value=\"Yes\"><label for=\"grafana_usage_yes\">Yes</label><br>\n";
        outputFile << "<input type=\"radio\" id=\"grafana_usage_no\" name=\"grafana_usage\" value=\"No\"><label for=\"grafana_usage_no\">No</label><br>\n";
        outputFile << "<p>If yes, what features or functionalities of Grafana do you find most valuable for monitoring purposes?</p>\n";
        outputFile << "<textarea id=\"grafana_features\" name=\"grafana_features\" placeholder=\"List valuable features of Grafana\"></textarea><br>\n";

        // Google Cloud Platform (GCP) - Cloud Audit Logs
        outputFile << "<h3>Google Cloud Platform (GCP):</h3>\n";
        outputFile << "<p>Have you used Cloud Audit Logs within Google Cloud Platform for monitoring and logging activities?</p>\n";
        outputFile << "<input type=\"radio\" id=\"gcp_audit_logs_usage_yes\" name=\"gcp_audit_logs_usage\" value=\"Yes\"><label for=\"gcp_audit_logs_usage_yes\">Yes</label><br>\n";
        outputFile << "<input type=\"radio\" id=\"gcp_audit_logs_usage_no\" name=\"gcp_audit_logs_usage\" value=\"No\"><label for=\"gcp_audit_logs_usage_no\">No</label><br>\n";

        // Section 4: Programming Languages
        outputFile << "<h2>Section 4: Programming Languages</h2>\n";
        outputFile << "<h3>Python:</h3>\n";
        outputFile << "<p>How proficient are you in Python programming language?</p>\n";
        outputFile << "<input type=\"radio\" id=\"python_proficiency_beginner\" name=\"python_proficiency\" value=\"Beginner\"><label for=\"python_proficiency_beginner\">Beginner</label><br>\n";
        outputFile << "<input type=\"radio\" id=\"python_proficiency_intermediate\" name=\"python_proficiency\" value=\"Intermediate\"><label for=\"python_proficiency_intermediate\">Intermediate</label><br>\n";
        outputFile << "<input type=\"radio\" id=\"python_proficiency_advanced\" name=\"python_proficiency\" value=\"Advanced\"><label for=\"python_proficiency_advanced\">Advanced</label><br>\n";
        outputFile << "<p>In which areas of cloud computing do you primarily use Python? (e.g., web development, automation, data analysis)</p>\n";
        outputFile << "<textarea id=\"python_usage_areas\" name=\"python_usage_areas\" placeholder=\"List areas of cloud computing where Python is primarily used\"></textarea><br>\n";

        // Java
        outputFile << "<h3>Java:</h3>\n";
        outputFile << "<p>Have you used Java for developing cloud-based applications or services?</p>\n";
        outputFile << "<input type=\"radio\" id=\"java_usage_yes\" name=\"java_usage\" value=\"Yes\"><label for=\"java_usage_yes\">Yes</label><br>\n";
        outputFile << "<input type=\"radio\" id=\"java_usage_no\" name=\"java_usage\" value=\"No\"><label for=\"java_usage_no\">No</label><br>\n";
        outputFile << "<p>If yes, what advantages do you see in using Java for cloud development compared to other languages?</p>\n";
        outputFile << "<textarea id=\"java_advantages\" name=\"java_advantages\" placeholder=\"List advantages of using Java for cloud development\"></textarea><br>\n";

        // Demographic Information
        outputFile << "<h2>Demographic Information</h2>\n";
        outputFile << "<p>Profession:</p>\n";
        outputFile << "<textarea id=\"profession\" name=\"profession\" placeholder=\"Specify your current profession or role in the tech industry\"></textarea><br>\n";
        outputFile << "<p>Experience Level:</p>\n";
        outputFile << "<input type=\"radio\" id=\"experience_level_novice\" name=\"experience_level\" value=\"Novice\"><label for=\"experience_level_novice\">Novice</label><br>\n";
        outputFile << "<input type=\"radio\" id=\"experience_level_intermediate\" name=\"experience_level\" value=\"Intermediate\"><label for=\"experience_level_intermediate\">Intermediate</label><br>\n";
        outputFile << "<input type=\"radio\" id=\"experience_level_expert\" name=\"experience_level\" value=\"Expert\"><label for=\"experience_level_expert\">Expert</label><br>\n";
        outputFile << "<p>Organization Type:</p>\n";
        outputFile << "<input type=\"checkbox\" id=\"organization_startup\" name=\"organization_type\" value=\"Startup\"><label for=\"organization_startup\">Startup</label><br>\n";
        outputFile << "<input type=\"checkbox\" id=\"organization_sme\" name=\"organization_type\" value=\"Small to medium-sized enterprise (SME)\"><label for=\"organization_sme\">Small to medium-sized enterprise (SME)</label><br>\n";
        outputFile << "<input type=\"checkbox\" id=\"organization_large_corp\" name=\"organization_type\" value=\"Large corporation\"><label for=\"organization_large_corp\">Large corporation</label><br>\n";
        outputFile << "<input type=\"checkbox\" id=\"organization_education\" name=\"organization_type\" value=\"Educational institution\"><label for=\"organization_education\">Educational institution</label><br>\n";
        outputFile << "<input type=\"checkbox\" id=\"organization_non_profit\" name=\"organization_type\" value=\"Non-profit organization\"><label for=\"organization_non_profit\">Non-profit organization</label><br>\n";
        outputFile << "<input type=\"checkbox\" id=\"organization_other\" name=\"organization_type\" value=\"Other\"><label for=\"organization_other\">Other (Please specify)</label><br>\n";
        outputFile << "<textarea id=\"organization_other_specification\" name=\"organization_other_specification\" placeholder=\"Specify other organization type\"></textarea><br>\n";

        // Additional Comments
        outputFile << "<h2>Additional Comments</h2>\n";
        outputFile << "<p>Is there anything else you would like to share regarding your experiences or preferences related to cloud computing tools and programming languages?</p>\n";
        outputFile << "<textarea id=\"additional_comments\" name=\"additional_comments\" placeholder=\"Enter additional comments\"></textarea><br>\n";

        outputFile << "<button type=\"submit\">Submit</button>\n";
        outputFile << "</form>\n";
        outputFile << "</body>\n";
        outputFile << "</html>\n";

        // Close the file stream
        outputFile.close();

        std::cout << "HTML survey form created successfully.\n";
        std::cout << "File Name: " << fileName << std::endl; // Print the file name for verification

        // Open the generated HTML file in the default web browser
        openInBrowser(fileName);
    }
    else {
        std::cerr << "Error: Unable to create HTML survey form.\n";
    }

    return 0;
}
