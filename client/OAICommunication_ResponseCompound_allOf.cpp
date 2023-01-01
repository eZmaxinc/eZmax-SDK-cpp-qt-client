/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.17
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAICommunication_ResponseCompound_allOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICommunication_ResponseCompound_allOf::OAICommunication_ResponseCompound_allOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICommunication_ResponseCompound_allOf::OAICommunication_ResponseCompound_allOf() {
    this->initializeModel();
}

OAICommunication_ResponseCompound_allOf::~OAICommunication_ResponseCompound_allOf() {}

void OAICommunication_ResponseCompound_allOf::initializeModel() {

    m_a_obj_communicationattachment_isSet = false;
    m_a_obj_communicationattachment_isValid = false;

    m_a_obj_communicationrecipient_isSet = false;
    m_a_obj_communicationrecipient_isValid = false;

    m_a_obj_communicationexternalrecipient_isSet = false;
    m_a_obj_communicationexternalrecipient_isValid = false;

    m_a_obj_communicationimage_isSet = false;
    m_a_obj_communicationimage_isValid = false;

    m_a_obj_communicationexternalimage_isSet = false;
    m_a_obj_communicationexternalimage_isValid = false;
}

void OAICommunication_ResponseCompound_allOf::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICommunication_ResponseCompound_allOf::fromJsonObject(QJsonObject json) {

    m_a_obj_communicationattachment_isValid = ::OpenAPI::fromJsonValue(a_obj_communicationattachment, json[QString("a_objCommunicationattachment")]);
    m_a_obj_communicationattachment_isSet = !json[QString("a_objCommunicationattachment")].isNull() && m_a_obj_communicationattachment_isValid;

    m_a_obj_communicationrecipient_isValid = ::OpenAPI::fromJsonValue(a_obj_communicationrecipient, json[QString("a_objCommunicationrecipient")]);
    m_a_obj_communicationrecipient_isSet = !json[QString("a_objCommunicationrecipient")].isNull() && m_a_obj_communicationrecipient_isValid;

    m_a_obj_communicationexternalrecipient_isValid = ::OpenAPI::fromJsonValue(a_obj_communicationexternalrecipient, json[QString("a_objCommunicationexternalrecipient")]);
    m_a_obj_communicationexternalrecipient_isSet = !json[QString("a_objCommunicationexternalrecipient")].isNull() && m_a_obj_communicationexternalrecipient_isValid;

    m_a_obj_communicationimage_isValid = ::OpenAPI::fromJsonValue(a_obj_communicationimage, json[QString("a_objCommunicationimage")]);
    m_a_obj_communicationimage_isSet = !json[QString("a_objCommunicationimage")].isNull() && m_a_obj_communicationimage_isValid;

    m_a_obj_communicationexternalimage_isValid = ::OpenAPI::fromJsonValue(a_obj_communicationexternalimage, json[QString("a_objCommunicationexternalimage")]);
    m_a_obj_communicationexternalimage_isSet = !json[QString("a_objCommunicationexternalimage")].isNull() && m_a_obj_communicationexternalimage_isValid;
}

QString OAICommunication_ResponseCompound_allOf::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICommunication_ResponseCompound_allOf::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_communicationattachment.size() > 0) {
        obj.insert(QString("a_objCommunicationattachment"), ::OpenAPI::toJsonValue(a_obj_communicationattachment));
    }
    if (a_obj_communicationrecipient.size() > 0) {
        obj.insert(QString("a_objCommunicationrecipient"), ::OpenAPI::toJsonValue(a_obj_communicationrecipient));
    }
    if (a_obj_communicationexternalrecipient.size() > 0) {
        obj.insert(QString("a_objCommunicationexternalrecipient"), ::OpenAPI::toJsonValue(a_obj_communicationexternalrecipient));
    }
    if (a_obj_communicationimage.size() > 0) {
        obj.insert(QString("a_objCommunicationimage"), ::OpenAPI::toJsonValue(a_obj_communicationimage));
    }
    if (a_obj_communicationexternalimage.size() > 0) {
        obj.insert(QString("a_objCommunicationexternalimage"), ::OpenAPI::toJsonValue(a_obj_communicationexternalimage));
    }
    return obj;
}

QList<OAICommunicationattachment_ResponseCompound> OAICommunication_ResponseCompound_allOf::getAObjCommunicationattachment() const {
    return a_obj_communicationattachment;
}
void OAICommunication_ResponseCompound_allOf::setAObjCommunicationattachment(const QList<OAICommunicationattachment_ResponseCompound> &a_obj_communicationattachment) {
    this->a_obj_communicationattachment = a_obj_communicationattachment;
    this->m_a_obj_communicationattachment_isSet = true;
}

bool OAICommunication_ResponseCompound_allOf::is_a_obj_communicationattachment_Set() const{
    return m_a_obj_communicationattachment_isSet;
}

bool OAICommunication_ResponseCompound_allOf::is_a_obj_communicationattachment_Valid() const{
    return m_a_obj_communicationattachment_isValid;
}

QList<OAICommunicationrecipient_ResponseCompound> OAICommunication_ResponseCompound_allOf::getAObjCommunicationrecipient() const {
    return a_obj_communicationrecipient;
}
void OAICommunication_ResponseCompound_allOf::setAObjCommunicationrecipient(const QList<OAICommunicationrecipient_ResponseCompound> &a_obj_communicationrecipient) {
    this->a_obj_communicationrecipient = a_obj_communicationrecipient;
    this->m_a_obj_communicationrecipient_isSet = true;
}

bool OAICommunication_ResponseCompound_allOf::is_a_obj_communicationrecipient_Set() const{
    return m_a_obj_communicationrecipient_isSet;
}

bool OAICommunication_ResponseCompound_allOf::is_a_obj_communicationrecipient_Valid() const{
    return m_a_obj_communicationrecipient_isValid;
}

QList<OAICommunicationexternalrecipient_ResponseCompound> OAICommunication_ResponseCompound_allOf::getAObjCommunicationexternalrecipient() const {
    return a_obj_communicationexternalrecipient;
}
void OAICommunication_ResponseCompound_allOf::setAObjCommunicationexternalrecipient(const QList<OAICommunicationexternalrecipient_ResponseCompound> &a_obj_communicationexternalrecipient) {
    this->a_obj_communicationexternalrecipient = a_obj_communicationexternalrecipient;
    this->m_a_obj_communicationexternalrecipient_isSet = true;
}

bool OAICommunication_ResponseCompound_allOf::is_a_obj_communicationexternalrecipient_Set() const{
    return m_a_obj_communicationexternalrecipient_isSet;
}

bool OAICommunication_ResponseCompound_allOf::is_a_obj_communicationexternalrecipient_Valid() const{
    return m_a_obj_communicationexternalrecipient_isValid;
}

QList<OAICommunicationimage_ResponseCompound> OAICommunication_ResponseCompound_allOf::getAObjCommunicationimage() const {
    return a_obj_communicationimage;
}
void OAICommunication_ResponseCompound_allOf::setAObjCommunicationimage(const QList<OAICommunicationimage_ResponseCompound> &a_obj_communicationimage) {
    this->a_obj_communicationimage = a_obj_communicationimage;
    this->m_a_obj_communicationimage_isSet = true;
}

bool OAICommunication_ResponseCompound_allOf::is_a_obj_communicationimage_Set() const{
    return m_a_obj_communicationimage_isSet;
}

bool OAICommunication_ResponseCompound_allOf::is_a_obj_communicationimage_Valid() const{
    return m_a_obj_communicationimage_isValid;
}

QList<OAICommunicationexternalimage_ResponseCompound> OAICommunication_ResponseCompound_allOf::getAObjCommunicationexternalimage() const {
    return a_obj_communicationexternalimage;
}
void OAICommunication_ResponseCompound_allOf::setAObjCommunicationexternalimage(const QList<OAICommunicationexternalimage_ResponseCompound> &a_obj_communicationexternalimage) {
    this->a_obj_communicationexternalimage = a_obj_communicationexternalimage;
    this->m_a_obj_communicationexternalimage_isSet = true;
}

bool OAICommunication_ResponseCompound_allOf::is_a_obj_communicationexternalimage_Set() const{
    return m_a_obj_communicationexternalimage_isSet;
}

bool OAICommunication_ResponseCompound_allOf::is_a_obj_communicationexternalimage_Valid() const{
    return m_a_obj_communicationexternalimage_isValid;
}

bool OAICommunication_ResponseCompound_allOf::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_communicationattachment.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_communicationrecipient.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_communicationexternalrecipient.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_communicationimage.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_communicationexternalimage.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICommunication_ResponseCompound_allOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_communicationattachment_isValid && m_a_obj_communicationrecipient_isValid && m_a_obj_communicationexternalrecipient_isValid && m_a_obj_communicationimage_isValid && m_a_obj_communicationexternalimage_isValid && true;
}

} // namespace OpenAPI