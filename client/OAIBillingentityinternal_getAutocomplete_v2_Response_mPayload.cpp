/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.13
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIBillingentityinternal_getAutocomplete_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIBillingentityinternal_getAutocomplete_v2_Response_mPayload::OAIBillingentityinternal_getAutocomplete_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIBillingentityinternal_getAutocomplete_v2_Response_mPayload::OAIBillingentityinternal_getAutocomplete_v2_Response_mPayload() {
    this->initializeModel();
}

OAIBillingentityinternal_getAutocomplete_v2_Response_mPayload::~OAIBillingentityinternal_getAutocomplete_v2_Response_mPayload() {}

void OAIBillingentityinternal_getAutocomplete_v2_Response_mPayload::initializeModel() {

    m_a_obj_billingentityinternal_isSet = false;
    m_a_obj_billingentityinternal_isValid = false;
}

void OAIBillingentityinternal_getAutocomplete_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIBillingentityinternal_getAutocomplete_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_billingentityinternal_isValid = ::OpenAPI::fromJsonValue(a_obj_billingentityinternal, json[QString("a_objBillingentityinternal")]);
    m_a_obj_billingentityinternal_isSet = !json[QString("a_objBillingentityinternal")].isNull() && m_a_obj_billingentityinternal_isValid;
}

QString OAIBillingentityinternal_getAutocomplete_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIBillingentityinternal_getAutocomplete_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_billingentityinternal.size() > 0) {
        obj.insert(QString("a_objBillingentityinternal"), ::OpenAPI::toJsonValue(a_obj_billingentityinternal));
    }
    return obj;
}

QList<OAIBillingentityinternal_AutocompleteElement_Response> OAIBillingentityinternal_getAutocomplete_v2_Response_mPayload::getAObjBillingentityinternal() const {
    return a_obj_billingentityinternal;
}
void OAIBillingentityinternal_getAutocomplete_v2_Response_mPayload::setAObjBillingentityinternal(const QList<OAIBillingentityinternal_AutocompleteElement_Response> &a_obj_billingentityinternal) {
    this->a_obj_billingentityinternal = a_obj_billingentityinternal;
    this->m_a_obj_billingentityinternal_isSet = true;
}

bool OAIBillingentityinternal_getAutocomplete_v2_Response_mPayload::is_a_obj_billingentityinternal_Set() const{
    return m_a_obj_billingentityinternal_isSet;
}

bool OAIBillingentityinternal_getAutocomplete_v2_Response_mPayload::is_a_obj_billingentityinternal_Valid() const{
    return m_a_obj_billingentityinternal_isValid;
}

bool OAIBillingentityinternal_getAutocomplete_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_billingentityinternal.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIBillingentityinternal_getAutocomplete_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_billingentityinternal_isValid && true;
}

} // namespace OpenAPI
