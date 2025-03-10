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

#include "Creditcardtype_getAutocomplete_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Creditcardtype_getAutocomplete_v2_Response_mPayload::Creditcardtype_getAutocomplete_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Creditcardtype_getAutocomplete_v2_Response_mPayload::Creditcardtype_getAutocomplete_v2_Response_mPayload() {
    this->initializeModel();
}

Creditcardtype_getAutocomplete_v2_Response_mPayload::~Creditcardtype_getAutocomplete_v2_Response_mPayload() {}

void Creditcardtype_getAutocomplete_v2_Response_mPayload::initializeModel() {

    m_a_obj_creditcardtype_isSet = false;
    m_a_obj_creditcardtype_isValid = false;
}

void Creditcardtype_getAutocomplete_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Creditcardtype_getAutocomplete_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_creditcardtype_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_creditcardtype, json[QString("a_objCreditcardtype")]);
    m_a_obj_creditcardtype_isSet = !json[QString("a_objCreditcardtype")].isNull() && m_a_obj_creditcardtype_isValid;
}

QString Creditcardtype_getAutocomplete_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Creditcardtype_getAutocomplete_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_creditcardtype.size() > 0) {
        obj.insert(QString("a_objCreditcardtype"), ::Ezmaxapi::toJsonValue(m_a_obj_creditcardtype));
    }
    return obj;
}

QList<Creditcardtype_AutocompleteElement_Response> Creditcardtype_getAutocomplete_v2_Response_mPayload::getAObjCreditcardtype() const {
    return m_a_obj_creditcardtype;
}
void Creditcardtype_getAutocomplete_v2_Response_mPayload::setAObjCreditcardtype(const QList<Creditcardtype_AutocompleteElement_Response> &a_obj_creditcardtype) {
    m_a_obj_creditcardtype = a_obj_creditcardtype;
    m_a_obj_creditcardtype_isSet = true;
}

bool Creditcardtype_getAutocomplete_v2_Response_mPayload::is_a_obj_creditcardtype_Set() const{
    return m_a_obj_creditcardtype_isSet;
}

bool Creditcardtype_getAutocomplete_v2_Response_mPayload::is_a_obj_creditcardtype_Valid() const{
    return m_a_obj_creditcardtype_isValid;
}

bool Creditcardtype_getAutocomplete_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_creditcardtype.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Creditcardtype_getAutocomplete_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_creditcardtype_isValid && true;
}

} // namespace Ezmaxapi
