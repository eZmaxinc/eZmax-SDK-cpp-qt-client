/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsignsignature_RequestCompound_allOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignsignature_RequestCompound_allOf::OAIEzsignsignature_RequestCompound_allOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignsignature_RequestCompound_allOf::OAIEzsignsignature_RequestCompound_allOf() {
    this->initializeModel();
}

OAIEzsignsignature_RequestCompound_allOf::~OAIEzsignsignature_RequestCompound_allOf() {}

void OAIEzsignsignature_RequestCompound_allOf::initializeModel() {

    m_b_ezsignsignature_customdate_isSet = false;
    m_b_ezsignsignature_customdate_isValid = false;

    m_a_obj_ezsignsignaturecustomdate_isSet = false;
    m_a_obj_ezsignsignaturecustomdate_isValid = false;
}

void OAIEzsignsignature_RequestCompound_allOf::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignsignature_RequestCompound_allOf::fromJsonObject(QJsonObject json) {

    m_b_ezsignsignature_customdate_isValid = ::OpenAPI::fromJsonValue(b_ezsignsignature_customdate, json[QString("bEzsignsignatureCustomdate")]);
    m_b_ezsignsignature_customdate_isSet = !json[QString("bEzsignsignatureCustomdate")].isNull() && m_b_ezsignsignature_customdate_isValid;

    m_a_obj_ezsignsignaturecustomdate_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsignsignaturecustomdate, json[QString("a_objEzsignsignaturecustomdate")]);
    m_a_obj_ezsignsignaturecustomdate_isSet = !json[QString("a_objEzsignsignaturecustomdate")].isNull() && m_a_obj_ezsignsignaturecustomdate_isValid;
}

QString OAIEzsignsignature_RequestCompound_allOf::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignsignature_RequestCompound_allOf::asJsonObject() const {
    QJsonObject obj;
    if (m_b_ezsignsignature_customdate_isSet) {
        obj.insert(QString("bEzsignsignatureCustomdate"), ::OpenAPI::toJsonValue(b_ezsignsignature_customdate));
    }
    if (a_obj_ezsignsignaturecustomdate.size() > 0) {
        obj.insert(QString("a_objEzsignsignaturecustomdate"), ::OpenAPI::toJsonValue(a_obj_ezsignsignaturecustomdate));
    }
    return obj;
}

bool OAIEzsignsignature_RequestCompound_allOf::isBEzsignsignatureCustomdate() const {
    return b_ezsignsignature_customdate;
}
void OAIEzsignsignature_RequestCompound_allOf::setBEzsignsignatureCustomdate(const bool &b_ezsignsignature_customdate) {
    this->b_ezsignsignature_customdate = b_ezsignsignature_customdate;
    this->m_b_ezsignsignature_customdate_isSet = true;
}

bool OAIEzsignsignature_RequestCompound_allOf::is_b_ezsignsignature_customdate_Set() const{
    return m_b_ezsignsignature_customdate_isSet;
}

bool OAIEzsignsignature_RequestCompound_allOf::is_b_ezsignsignature_customdate_Valid() const{
    return m_b_ezsignsignature_customdate_isValid;
}

QList<OAIEzsignsignaturecustomdate_RequestCompound> OAIEzsignsignature_RequestCompound_allOf::getAObjEzsignsignaturecustomdate() const {
    return a_obj_ezsignsignaturecustomdate;
}
void OAIEzsignsignature_RequestCompound_allOf::setAObjEzsignsignaturecustomdate(const QList<OAIEzsignsignaturecustomdate_RequestCompound> &a_obj_ezsignsignaturecustomdate) {
    this->a_obj_ezsignsignaturecustomdate = a_obj_ezsignsignaturecustomdate;
    this->m_a_obj_ezsignsignaturecustomdate_isSet = true;
}

bool OAIEzsignsignature_RequestCompound_allOf::is_a_obj_ezsignsignaturecustomdate_Set() const{
    return m_a_obj_ezsignsignaturecustomdate_isSet;
}

bool OAIEzsignsignature_RequestCompound_allOf::is_a_obj_ezsignsignaturecustomdate_Valid() const{
    return m_a_obj_ezsignsignaturecustomdate_isValid;
}

bool OAIEzsignsignature_RequestCompound_allOf::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_b_ezsignsignature_customdate_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_ezsignsignaturecustomdate.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignsignature_RequestCompound_allOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
