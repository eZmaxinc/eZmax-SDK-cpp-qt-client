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

#include "OAISignature_editObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace Ezmaxapi {

OAISignature_editObject_v1_Request::OAISignature_editObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISignature_editObject_v1_Request::OAISignature_editObject_v1_Request() {
    this->initializeModel();
}

OAISignature_editObject_v1_Request::~OAISignature_editObject_v1_Request() {}

void OAISignature_editObject_v1_Request::initializeModel() {

    m_obj_signature_isSet = false;
    m_obj_signature_isValid = false;
}

void OAISignature_editObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISignature_editObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_obj_signature_isValid = ::Ezmaxapi::fromJsonValue(m_obj_signature, json[QString("objSignature")]);
    m_obj_signature_isSet = !json[QString("objSignature")].isNull() && m_obj_signature_isValid;
}

QString OAISignature_editObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISignature_editObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_signature.isSet()) {
        obj.insert(QString("objSignature"), ::Ezmaxapi::toJsonValue(m_obj_signature));
    }
    return obj;
}

OAISignature_RequestCompound OAISignature_editObject_v1_Request::getObjSignature() const {
    return m_obj_signature;
}
void OAISignature_editObject_v1_Request::setObjSignature(const OAISignature_RequestCompound &obj_signature) {
    m_obj_signature = obj_signature;
    m_obj_signature_isSet = true;
}

bool OAISignature_editObject_v1_Request::is_obj_signature_Set() const{
    return m_obj_signature_isSet;
}

bool OAISignature_editObject_v1_Request::is_obj_signature_Valid() const{
    return m_obj_signature_isValid;
}

bool OAISignature_editObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_signature.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISignature_editObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_signature_isValid && true;
}

} // namespace Ezmaxapi
