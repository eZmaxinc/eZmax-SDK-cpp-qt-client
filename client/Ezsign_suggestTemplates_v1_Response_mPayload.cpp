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

#include "Ezsign_suggestTemplates_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsign_suggestTemplates_v1_Response_mPayload::Ezsign_suggestTemplates_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsign_suggestTemplates_v1_Response_mPayload::Ezsign_suggestTemplates_v1_Response_mPayload() {
    this->initializeModel();
}

Ezsign_suggestTemplates_v1_Response_mPayload::~Ezsign_suggestTemplates_v1_Response_mPayload() {}

void Ezsign_suggestTemplates_v1_Response_mPayload::initializeModel() {

    m_a_obj_ezsigntemplate_isSet = false;
    m_a_obj_ezsigntemplate_isValid = false;

    m_a_obj_ezsigntemplatepackage_isSet = false;
    m_a_obj_ezsigntemplatepackage_isValid = false;

    m_a_obj_ezsigntemplateglobal_isSet = false;
    m_a_obj_ezsigntemplateglobal_isValid = false;
}

void Ezsign_suggestTemplates_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsign_suggestTemplates_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsigntemplate_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_ezsigntemplate, json[QString("a_objEzsigntemplate")]);
    m_a_obj_ezsigntemplate_isSet = !json[QString("a_objEzsigntemplate")].isNull() && m_a_obj_ezsigntemplate_isValid;

    m_a_obj_ezsigntemplatepackage_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_ezsigntemplatepackage, json[QString("a_objEzsigntemplatepackage")]);
    m_a_obj_ezsigntemplatepackage_isSet = !json[QString("a_objEzsigntemplatepackage")].isNull() && m_a_obj_ezsigntemplatepackage_isValid;

    m_a_obj_ezsigntemplateglobal_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_ezsigntemplateglobal, json[QString("a_objEzsigntemplateglobal")]);
    m_a_obj_ezsigntemplateglobal_isSet = !json[QString("a_objEzsigntemplateglobal")].isNull() && m_a_obj_ezsigntemplateglobal_isValid;
}

QString Ezsign_suggestTemplates_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsign_suggestTemplates_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_ezsigntemplate.size() > 0) {
        obj.insert(QString("a_objEzsigntemplate"), ::Ezmaxapi::toJsonValue(m_a_obj_ezsigntemplate));
    }
    if (m_a_obj_ezsigntemplatepackage.size() > 0) {
        obj.insert(QString("a_objEzsigntemplatepackage"), ::Ezmaxapi::toJsonValue(m_a_obj_ezsigntemplatepackage));
    }
    if (m_a_obj_ezsigntemplateglobal.size() > 0) {
        obj.insert(QString("a_objEzsigntemplateglobal"), ::Ezmaxapi::toJsonValue(m_a_obj_ezsigntemplateglobal));
    }
    return obj;
}

QList<Ezsigntemplate_ResponseCompound> Ezsign_suggestTemplates_v1_Response_mPayload::getAObjEzsigntemplate() const {
    return m_a_obj_ezsigntemplate;
}
void Ezsign_suggestTemplates_v1_Response_mPayload::setAObjEzsigntemplate(const QList<Ezsigntemplate_ResponseCompound> &a_obj_ezsigntemplate) {
    m_a_obj_ezsigntemplate = a_obj_ezsigntemplate;
    m_a_obj_ezsigntemplate_isSet = true;
}

bool Ezsign_suggestTemplates_v1_Response_mPayload::is_a_obj_ezsigntemplate_Set() const{
    return m_a_obj_ezsigntemplate_isSet;
}

bool Ezsign_suggestTemplates_v1_Response_mPayload::is_a_obj_ezsigntemplate_Valid() const{
    return m_a_obj_ezsigntemplate_isValid;
}

QList<Ezsigntemplatepackage_ResponseCompound> Ezsign_suggestTemplates_v1_Response_mPayload::getAObjEzsigntemplatepackage() const {
    return m_a_obj_ezsigntemplatepackage;
}
void Ezsign_suggestTemplates_v1_Response_mPayload::setAObjEzsigntemplatepackage(const QList<Ezsigntemplatepackage_ResponseCompound> &a_obj_ezsigntemplatepackage) {
    m_a_obj_ezsigntemplatepackage = a_obj_ezsigntemplatepackage;
    m_a_obj_ezsigntemplatepackage_isSet = true;
}

bool Ezsign_suggestTemplates_v1_Response_mPayload::is_a_obj_ezsigntemplatepackage_Set() const{
    return m_a_obj_ezsigntemplatepackage_isSet;
}

bool Ezsign_suggestTemplates_v1_Response_mPayload::is_a_obj_ezsigntemplatepackage_Valid() const{
    return m_a_obj_ezsigntemplatepackage_isValid;
}

QList<Ezsigntemplateglobal_ResponseCompound> Ezsign_suggestTemplates_v1_Response_mPayload::getAObjEzsigntemplateglobal() const {
    return m_a_obj_ezsigntemplateglobal;
}
void Ezsign_suggestTemplates_v1_Response_mPayload::setAObjEzsigntemplateglobal(const QList<Ezsigntemplateglobal_ResponseCompound> &a_obj_ezsigntemplateglobal) {
    m_a_obj_ezsigntemplateglobal = a_obj_ezsigntemplateglobal;
    m_a_obj_ezsigntemplateglobal_isSet = true;
}

bool Ezsign_suggestTemplates_v1_Response_mPayload::is_a_obj_ezsigntemplateglobal_Set() const{
    return m_a_obj_ezsigntemplateglobal_isSet;
}

bool Ezsign_suggestTemplates_v1_Response_mPayload::is_a_obj_ezsigntemplateglobal_Valid() const{
    return m_a_obj_ezsigntemplateglobal_isValid;
}

bool Ezsign_suggestTemplates_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_ezsigntemplate.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_ezsigntemplatepackage.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_ezsigntemplateglobal.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsign_suggestTemplates_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsigntemplate_isValid && m_a_obj_ezsigntemplatepackage_isValid && m_a_obj_ezsigntemplateglobal_isValid && true;
}

} // namespace Ezmaxapi
