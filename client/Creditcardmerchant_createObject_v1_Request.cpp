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

#include "Creditcardmerchant_createObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Creditcardmerchant_createObject_v1_Request::Creditcardmerchant_createObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Creditcardmerchant_createObject_v1_Request::Creditcardmerchant_createObject_v1_Request() {
    this->initializeModel();
}

Creditcardmerchant_createObject_v1_Request::~Creditcardmerchant_createObject_v1_Request() {}

void Creditcardmerchant_createObject_v1_Request::initializeModel() {

    m_a_obj_creditcardmerchant_isSet = false;
    m_a_obj_creditcardmerchant_isValid = false;
}

void Creditcardmerchant_createObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Creditcardmerchant_createObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_a_obj_creditcardmerchant_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_creditcardmerchant, json[QString("a_objCreditcardmerchant")]);
    m_a_obj_creditcardmerchant_isSet = !json[QString("a_objCreditcardmerchant")].isNull() && m_a_obj_creditcardmerchant_isValid;
}

QString Creditcardmerchant_createObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Creditcardmerchant_createObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_creditcardmerchant.size() > 0) {
        obj.insert(QString("a_objCreditcardmerchant"), ::Ezmaxapi::toJsonValue(m_a_obj_creditcardmerchant));
    }
    return obj;
}

QList<Creditcardmerchant_RequestCompound> Creditcardmerchant_createObject_v1_Request::getAObjCreditcardmerchant() const {
    return m_a_obj_creditcardmerchant;
}
void Creditcardmerchant_createObject_v1_Request::setAObjCreditcardmerchant(const QList<Creditcardmerchant_RequestCompound> &a_obj_creditcardmerchant) {
    m_a_obj_creditcardmerchant = a_obj_creditcardmerchant;
    m_a_obj_creditcardmerchant_isSet = true;
}

bool Creditcardmerchant_createObject_v1_Request::is_a_obj_creditcardmerchant_Set() const{
    return m_a_obj_creditcardmerchant_isSet;
}

bool Creditcardmerchant_createObject_v1_Request::is_a_obj_creditcardmerchant_Valid() const{
    return m_a_obj_creditcardmerchant_isValid;
}

bool Creditcardmerchant_createObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_creditcardmerchant.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Creditcardmerchant_createObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_creditcardmerchant_isValid && true;
}

} // namespace Ezmaxapi
