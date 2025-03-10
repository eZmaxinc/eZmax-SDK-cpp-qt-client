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

#include "Common_Report.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Common_Report::Common_Report(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Common_Report::Common_Report() {
    this->initializeModel();
}

Common_Report::~Common_Report() {}

void Common_Report::initializeModel() {

    m_a_obj_reportsection_isSet = false;
    m_a_obj_reportsection_isValid = false;

    m_b_report_paginate_isSet = false;
    m_b_report_paginate_isValid = false;

    m_s_report_title_isSet = false;
    m_s_report_title_isValid = false;
}

void Common_Report::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Common_Report::fromJsonObject(QJsonObject json) {

    m_a_obj_reportsection_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_reportsection, json[QString("a_objReportsection")]);
    m_a_obj_reportsection_isSet = !json[QString("a_objReportsection")].isNull() && m_a_obj_reportsection_isValid;

    m_b_report_paginate_isValid = ::Ezmaxapi::fromJsonValue(m_b_report_paginate, json[QString("bReportPaginate")]);
    m_b_report_paginate_isSet = !json[QString("bReportPaginate")].isNull() && m_b_report_paginate_isValid;

    m_s_report_title_isValid = ::Ezmaxapi::fromJsonValue(m_s_report_title, json[QString("sReportTitle")]);
    m_s_report_title_isSet = !json[QString("sReportTitle")].isNull() && m_s_report_title_isValid;
}

QString Common_Report::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Common_Report::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_reportsection.size() > 0) {
        obj.insert(QString("a_objReportsection"), ::Ezmaxapi::toJsonValue(m_a_obj_reportsection));
    }
    if (m_b_report_paginate_isSet) {
        obj.insert(QString("bReportPaginate"), ::Ezmaxapi::toJsonValue(m_b_report_paginate));
    }
    if (m_s_report_title_isSet) {
        obj.insert(QString("sReportTitle"), ::Ezmaxapi::toJsonValue(m_s_report_title));
    }
    return obj;
}

QList<Common_Reportsection> Common_Report::getAObjReportsection() const {
    return m_a_obj_reportsection;
}
void Common_Report::setAObjReportsection(const QList<Common_Reportsection> &a_obj_reportsection) {
    m_a_obj_reportsection = a_obj_reportsection;
    m_a_obj_reportsection_isSet = true;
}

bool Common_Report::is_a_obj_reportsection_Set() const{
    return m_a_obj_reportsection_isSet;
}

bool Common_Report::is_a_obj_reportsection_Valid() const{
    return m_a_obj_reportsection_isValid;
}

bool Common_Report::isBReportPaginate() const {
    return m_b_report_paginate;
}
void Common_Report::setBReportPaginate(const bool &b_report_paginate) {
    m_b_report_paginate = b_report_paginate;
    m_b_report_paginate_isSet = true;
}

bool Common_Report::is_b_report_paginate_Set() const{
    return m_b_report_paginate_isSet;
}

bool Common_Report::is_b_report_paginate_Valid() const{
    return m_b_report_paginate_isValid;
}

QString Common_Report::getSReportTitle() const {
    return m_s_report_title;
}
void Common_Report::setSReportTitle(const QString &s_report_title) {
    m_s_report_title = s_report_title;
    m_s_report_title_isSet = true;
}

bool Common_Report::is_s_report_title_Set() const{
    return m_s_report_title_isSet;
}

bool Common_Report::is_s_report_title_Valid() const{
    return m_s_report_title_isValid;
}

bool Common_Report::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_reportsection.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_report_paginate_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_report_title_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Common_Report::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_reportsection_isValid && true;
}

} // namespace Ezmaxapi
