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

#include "Billingentityinternal_getAutocomplete_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Billingentityinternal_getAutocomplete_v2_Response_mPayload::Billingentityinternal_getAutocomplete_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Billingentityinternal_getAutocomplete_v2_Response_mPayload::Billingentityinternal_getAutocomplete_v2_Response_mPayload() {
    this->initializeModel();
}

Billingentityinternal_getAutocomplete_v2_Response_mPayload::~Billingentityinternal_getAutocomplete_v2_Response_mPayload() {}

void Billingentityinternal_getAutocomplete_v2_Response_mPayload::initializeModel() {

    m_a_obj_billingentityinternal_isSet = false;
    m_a_obj_billingentityinternal_isValid = false;
}

void Billingentityinternal_getAutocomplete_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Billingentityinternal_getAutocomplete_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_billingentityinternal_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_billingentityinternal, json[QString("a_objBillingentityinternal")]);
    m_a_obj_billingentityinternal_isSet = !json[QString("a_objBillingentityinternal")].isNull() && m_a_obj_billingentityinternal_isValid;
}

QString Billingentityinternal_getAutocomplete_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Billingentityinternal_getAutocomplete_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_billingentityinternal.size() > 0) {
        obj.insert(QString("a_objBillingentityinternal"), ::Ezmaxapi::toJsonValue(m_a_obj_billingentityinternal));
    }
    return obj;
}

QList<Billingentityinternal_AutocompleteElement_Response> Billingentityinternal_getAutocomplete_v2_Response_mPayload::getAObjBillingentityinternal() const {
    return m_a_obj_billingentityinternal;
}
void Billingentityinternal_getAutocomplete_v2_Response_mPayload::setAObjBillingentityinternal(const QList<Billingentityinternal_AutocompleteElement_Response> &a_obj_billingentityinternal) {
    m_a_obj_billingentityinternal = a_obj_billingentityinternal;
    m_a_obj_billingentityinternal_isSet = true;
}

bool Billingentityinternal_getAutocomplete_v2_Response_mPayload::is_a_obj_billingentityinternal_Set() const{
    return m_a_obj_billingentityinternal_isSet;
}

bool Billingentityinternal_getAutocomplete_v2_Response_mPayload::is_a_obj_billingentityinternal_Valid() const{
    return m_a_obj_billingentityinternal_isValid;
}

bool Billingentityinternal_getAutocomplete_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_billingentityinternal.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Billingentityinternal_getAutocomplete_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_billingentityinternal_isValid && true;
}

} // namespace Ezmaxapi
