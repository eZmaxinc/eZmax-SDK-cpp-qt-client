/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIPeriod_getAutocomplete_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace Ezmaxapi {

OAIPeriod_getAutocomplete_v2_Response_mPayload::OAIPeriod_getAutocomplete_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPeriod_getAutocomplete_v2_Response_mPayload::OAIPeriod_getAutocomplete_v2_Response_mPayload() {
    this->initializeModel();
}

OAIPeriod_getAutocomplete_v2_Response_mPayload::~OAIPeriod_getAutocomplete_v2_Response_mPayload() {}

void OAIPeriod_getAutocomplete_v2_Response_mPayload::initializeModel() {

    m_a_obj_period_isSet = false;
    m_a_obj_period_isValid = false;
}

void OAIPeriod_getAutocomplete_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPeriod_getAutocomplete_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_period_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_period, json[QString("a_objPeriod")]);
    m_a_obj_period_isSet = !json[QString("a_objPeriod")].isNull() && m_a_obj_period_isValid;
}

QString OAIPeriod_getAutocomplete_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPeriod_getAutocomplete_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_period.size() > 0) {
        obj.insert(QString("a_objPeriod"), ::Ezmaxapi::toJsonValue(m_a_obj_period));
    }
    return obj;
}

QList<OAIPeriod_AutocompleteElement_Response> OAIPeriod_getAutocomplete_v2_Response_mPayload::getAObjPeriod() const {
    return m_a_obj_period;
}
void OAIPeriod_getAutocomplete_v2_Response_mPayload::setAObjPeriod(const QList<OAIPeriod_AutocompleteElement_Response> &a_obj_period) {
    m_a_obj_period = a_obj_period;
    m_a_obj_period_isSet = true;
}

bool OAIPeriod_getAutocomplete_v2_Response_mPayload::is_a_obj_period_Set() const{
    return m_a_obj_period_isSet;
}

bool OAIPeriod_getAutocomplete_v2_Response_mPayload::is_a_obj_period_Valid() const{
    return m_a_obj_period_isValid;
}

bool OAIPeriod_getAutocomplete_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_period.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPeriod_getAutocomplete_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace Ezmaxapi
