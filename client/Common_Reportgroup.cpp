/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Common_Reportgroup.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Common_Reportgroup::Common_Reportgroup(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Common_Reportgroup::Common_Reportgroup() {
    this->initializeModel();
}

Common_Reportgroup::~Common_Reportgroup() {}

void Common_Reportgroup::initializeModel() {

    m_a_obj_report_isSet = false;
    m_a_obj_report_isValid = false;

    m_a_obj_reportcellstyle_custom_isSet = false;
    m_a_obj_reportcellstyle_custom_isValid = false;

    m_a_obj_reportgroup_parameter_isSet = false;
    m_a_obj_reportgroup_parameter_isValid = false;

    m_s_reportgroup_filename_isSet = false;
    m_s_reportgroup_filename_isValid = false;
}

void Common_Reportgroup::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Common_Reportgroup::fromJsonObject(QJsonObject json) {

    m_a_obj_report_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_report, json[QString("a_objReport")]);
    m_a_obj_report_isSet = !json[QString("a_objReport")].isNull() && m_a_obj_report_isValid;

    m_a_obj_reportcellstyle_custom_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_reportcellstyle_custom, json[QString("a_objReportcellstyleCustom")]);
    m_a_obj_reportcellstyle_custom_isSet = !json[QString("a_objReportcellstyleCustom")].isNull() && m_a_obj_reportcellstyle_custom_isValid;

    m_a_obj_reportgroup_parameter_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_reportgroup_parameter, json[QString("a_objReportgroupParameter")]);
    m_a_obj_reportgroup_parameter_isSet = !json[QString("a_objReportgroupParameter")].isNull() && m_a_obj_reportgroup_parameter_isValid;

    m_s_reportgroup_filename_isValid = ::Ezmaxapi::fromJsonValue(m_s_reportgroup_filename, json[QString("sReportgroupFilename")]);
    m_s_reportgroup_filename_isSet = !json[QString("sReportgroupFilename")].isNull() && m_s_reportgroup_filename_isValid;
}

QString Common_Reportgroup::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Common_Reportgroup::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_report.size() > 0) {
        obj.insert(QString("a_objReport"), ::Ezmaxapi::toJsonValue(m_a_obj_report));
    }
    if (m_a_obj_reportcellstyle_custom.size() > 0) {
        obj.insert(QString("a_objReportcellstyleCustom"), ::Ezmaxapi::toJsonValue(m_a_obj_reportcellstyle_custom));
    }
    if (m_a_obj_reportgroup_parameter.size() > 0) {
        obj.insert(QString("a_objReportgroupParameter"), ::Ezmaxapi::toJsonValue(m_a_obj_reportgroup_parameter));
    }
    if (m_s_reportgroup_filename_isSet) {
        obj.insert(QString("sReportgroupFilename"), ::Ezmaxapi::toJsonValue(m_s_reportgroup_filename));
    }
    return obj;
}

QList<Common_Report> Common_Reportgroup::getAObjReport() const {
    return m_a_obj_report;
}
void Common_Reportgroup::setAObjReport(const QList<Common_Report> &a_obj_report) {
    m_a_obj_report = a_obj_report;
    m_a_obj_report_isSet = true;
}

bool Common_Reportgroup::is_a_obj_report_Set() const{
    return m_a_obj_report_isSet;
}

bool Common_Reportgroup::is_a_obj_report_Valid() const{
    return m_a_obj_report_isValid;
}

QList<Common_Reportcellstyle> Common_Reportgroup::getAObjReportcellstyleCustom() const {
    return m_a_obj_reportcellstyle_custom;
}
void Common_Reportgroup::setAObjReportcellstyleCustom(const QList<Common_Reportcellstyle> &a_obj_reportcellstyle_custom) {
    m_a_obj_reportcellstyle_custom = a_obj_reportcellstyle_custom;
    m_a_obj_reportcellstyle_custom_isSet = true;
}

bool Common_Reportgroup::is_a_obj_reportcellstyle_custom_Set() const{
    return m_a_obj_reportcellstyle_custom_isSet;
}

bool Common_Reportgroup::is_a_obj_reportcellstyle_custom_Valid() const{
    return m_a_obj_reportcellstyle_custom_isValid;
}

QList<Common_ReportgroupParameter> Common_Reportgroup::getAObjReportgroupParameter() const {
    return m_a_obj_reportgroup_parameter;
}
void Common_Reportgroup::setAObjReportgroupParameter(const QList<Common_ReportgroupParameter> &a_obj_reportgroup_parameter) {
    m_a_obj_reportgroup_parameter = a_obj_reportgroup_parameter;
    m_a_obj_reportgroup_parameter_isSet = true;
}

bool Common_Reportgroup::is_a_obj_reportgroup_parameter_Set() const{
    return m_a_obj_reportgroup_parameter_isSet;
}

bool Common_Reportgroup::is_a_obj_reportgroup_parameter_Valid() const{
    return m_a_obj_reportgroup_parameter_isValid;
}

QString Common_Reportgroup::getSReportgroupFilename() const {
    return m_s_reportgroup_filename;
}
void Common_Reportgroup::setSReportgroupFilename(const QString &s_reportgroup_filename) {
    m_s_reportgroup_filename = s_reportgroup_filename;
    m_s_reportgroup_filename_isSet = true;
}

bool Common_Reportgroup::is_s_reportgroup_filename_Set() const{
    return m_s_reportgroup_filename_isSet;
}

bool Common_Reportgroup::is_s_reportgroup_filename_Valid() const{
    return m_s_reportgroup_filename_isValid;
}

bool Common_Reportgroup::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_report.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_reportcellstyle_custom.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_reportgroup_parameter.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_reportgroup_filename_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Common_Reportgroup::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_report_isValid && m_a_obj_reportcellstyle_custom_isValid && m_a_obj_reportgroup_parameter_isValid && m_s_reportgroup_filename_isValid && true;
}

} // namespace Ezmaxapi
