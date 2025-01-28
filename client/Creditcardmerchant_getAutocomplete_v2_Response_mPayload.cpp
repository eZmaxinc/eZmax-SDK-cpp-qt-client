/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Creditcardmerchant_getAutocomplete_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Creditcardmerchant_getAutocomplete_v2_Response_mPayload::Creditcardmerchant_getAutocomplete_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Creditcardmerchant_getAutocomplete_v2_Response_mPayload::Creditcardmerchant_getAutocomplete_v2_Response_mPayload() {
    this->initializeModel();
}

Creditcardmerchant_getAutocomplete_v2_Response_mPayload::~Creditcardmerchant_getAutocomplete_v2_Response_mPayload() {}

void Creditcardmerchant_getAutocomplete_v2_Response_mPayload::initializeModel() {

    m_a_obj_creditcardmerchant_isSet = false;
    m_a_obj_creditcardmerchant_isValid = false;
}

void Creditcardmerchant_getAutocomplete_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Creditcardmerchant_getAutocomplete_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_creditcardmerchant_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_creditcardmerchant, json[QString("a_objCreditcardmerchant")]);
    m_a_obj_creditcardmerchant_isSet = !json[QString("a_objCreditcardmerchant")].isNull() && m_a_obj_creditcardmerchant_isValid;
}

QString Creditcardmerchant_getAutocomplete_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Creditcardmerchant_getAutocomplete_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_creditcardmerchant.size() > 0) {
        obj.insert(QString("a_objCreditcardmerchant"), ::Ezmaxapi::toJsonValue(m_a_obj_creditcardmerchant));
    }
    return obj;
}

QList<Creditcardmerchant_AutocompleteElement_Response> Creditcardmerchant_getAutocomplete_v2_Response_mPayload::getAObjCreditcardmerchant() const {
    return m_a_obj_creditcardmerchant;
}
void Creditcardmerchant_getAutocomplete_v2_Response_mPayload::setAObjCreditcardmerchant(const QList<Creditcardmerchant_AutocompleteElement_Response> &a_obj_creditcardmerchant) {
    m_a_obj_creditcardmerchant = a_obj_creditcardmerchant;
    m_a_obj_creditcardmerchant_isSet = true;
}

bool Creditcardmerchant_getAutocomplete_v2_Response_mPayload::is_a_obj_creditcardmerchant_Set() const{
    return m_a_obj_creditcardmerchant_isSet;
}

bool Creditcardmerchant_getAutocomplete_v2_Response_mPayload::is_a_obj_creditcardmerchant_Valid() const{
    return m_a_obj_creditcardmerchant_isValid;
}

bool Creditcardmerchant_getAutocomplete_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_creditcardmerchant.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Creditcardmerchant_getAutocomplete_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_creditcardmerchant_isValid && true;
}

} // namespace Ezmaxapi
