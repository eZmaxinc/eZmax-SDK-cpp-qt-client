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

#include "Creditcardmerchant_getObject_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Creditcardmerchant_getObject_v2_Response_mPayload::Creditcardmerchant_getObject_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Creditcardmerchant_getObject_v2_Response_mPayload::Creditcardmerchant_getObject_v2_Response_mPayload() {
    this->initializeModel();
}

Creditcardmerchant_getObject_v2_Response_mPayload::~Creditcardmerchant_getObject_v2_Response_mPayload() {}

void Creditcardmerchant_getObject_v2_Response_mPayload::initializeModel() {

    m_obj_creditcardmerchant_isSet = false;
    m_obj_creditcardmerchant_isValid = false;
}

void Creditcardmerchant_getObject_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Creditcardmerchant_getObject_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_obj_creditcardmerchant_isValid = ::Ezmaxapi::fromJsonValue(m_obj_creditcardmerchant, json[QString("objCreditcardmerchant")]);
    m_obj_creditcardmerchant_isSet = !json[QString("objCreditcardmerchant")].isNull() && m_obj_creditcardmerchant_isValid;
}

QString Creditcardmerchant_getObject_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Creditcardmerchant_getObject_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_creditcardmerchant.isSet()) {
        obj.insert(QString("objCreditcardmerchant"), ::Ezmaxapi::toJsonValue(m_obj_creditcardmerchant));
    }
    return obj;
}

Creditcardmerchant_ResponseCompound Creditcardmerchant_getObject_v2_Response_mPayload::getObjCreditcardmerchant() const {
    return m_obj_creditcardmerchant;
}
void Creditcardmerchant_getObject_v2_Response_mPayload::setObjCreditcardmerchant(const Creditcardmerchant_ResponseCompound &obj_creditcardmerchant) {
    m_obj_creditcardmerchant = obj_creditcardmerchant;
    m_obj_creditcardmerchant_isSet = true;
}

bool Creditcardmerchant_getObject_v2_Response_mPayload::is_obj_creditcardmerchant_Set() const{
    return m_obj_creditcardmerchant_isSet;
}

bool Creditcardmerchant_getObject_v2_Response_mPayload::is_obj_creditcardmerchant_Valid() const{
    return m_obj_creditcardmerchant_isValid;
}

bool Creditcardmerchant_getObject_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_creditcardmerchant.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Creditcardmerchant_getObject_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_creditcardmerchant_isValid && true;
}

} // namespace Ezmaxapi
