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

#include "OAIEzsigndocument_ResponseCompound_allOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigndocument_ResponseCompound_allOf::OAIEzsigndocument_ResponseCompound_allOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigndocument_ResponseCompound_allOf::OAIEzsigndocument_ResponseCompound_allOf() {
    this->initializeModel();
}

OAIEzsigndocument_ResponseCompound_allOf::~OAIEzsigndocument_ResponseCompound_allOf() {}

void OAIEzsigndocument_ResponseCompound_allOf::initializeModel() {

    m_i_ezsigndocument_stepformtotal_isSet = false;
    m_i_ezsigndocument_stepformtotal_isValid = false;

    m_i_ezsigndocument_stepformcurrent_isSet = false;
    m_i_ezsigndocument_stepformcurrent_isValid = false;

    m_i_ezsigndocument_stepsignaturetotal_isSet = false;
    m_i_ezsigndocument_stepsignaturetotal_isValid = false;

    m_i_ezsigndocument_stepsignature_current_isSet = false;
    m_i_ezsigndocument_stepsignature_current_isValid = false;

    m_a_obj_ezsignfoldersignerassociationstatus_isSet = false;
    m_a_obj_ezsignfoldersignerassociationstatus_isValid = false;
}

void OAIEzsigndocument_ResponseCompound_allOf::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigndocument_ResponseCompound_allOf::fromJsonObject(QJsonObject json) {

    m_i_ezsigndocument_stepformtotal_isValid = ::OpenAPI::fromJsonValue(i_ezsigndocument_stepformtotal, json[QString("iEzsigndocumentStepformtotal")]);
    m_i_ezsigndocument_stepformtotal_isSet = !json[QString("iEzsigndocumentStepformtotal")].isNull() && m_i_ezsigndocument_stepformtotal_isValid;

    m_i_ezsigndocument_stepformcurrent_isValid = ::OpenAPI::fromJsonValue(i_ezsigndocument_stepformcurrent, json[QString("iEzsigndocumentStepformcurrent")]);
    m_i_ezsigndocument_stepformcurrent_isSet = !json[QString("iEzsigndocumentStepformcurrent")].isNull() && m_i_ezsigndocument_stepformcurrent_isValid;

    m_i_ezsigndocument_stepsignaturetotal_isValid = ::OpenAPI::fromJsonValue(i_ezsigndocument_stepsignaturetotal, json[QString("iEzsigndocumentStepsignaturetotal")]);
    m_i_ezsigndocument_stepsignaturetotal_isSet = !json[QString("iEzsigndocumentStepsignaturetotal")].isNull() && m_i_ezsigndocument_stepsignaturetotal_isValid;

    m_i_ezsigndocument_stepsignature_current_isValid = ::OpenAPI::fromJsonValue(i_ezsigndocument_stepsignature_current, json[QString("iEzsigndocumentStepsignatureCurrent")]);
    m_i_ezsigndocument_stepsignature_current_isSet = !json[QString("iEzsigndocumentStepsignatureCurrent")].isNull() && m_i_ezsigndocument_stepsignature_current_isValid;

    m_a_obj_ezsignfoldersignerassociationstatus_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsignfoldersignerassociationstatus, json[QString("a_objEzsignfoldersignerassociationstatus")]);
    m_a_obj_ezsignfoldersignerassociationstatus_isSet = !json[QString("a_objEzsignfoldersignerassociationstatus")].isNull() && m_a_obj_ezsignfoldersignerassociationstatus_isValid;
}

QString OAIEzsigndocument_ResponseCompound_allOf::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigndocument_ResponseCompound_allOf::asJsonObject() const {
    QJsonObject obj;
    if (m_i_ezsigndocument_stepformtotal_isSet) {
        obj.insert(QString("iEzsigndocumentStepformtotal"), ::OpenAPI::toJsonValue(i_ezsigndocument_stepformtotal));
    }
    if (m_i_ezsigndocument_stepformcurrent_isSet) {
        obj.insert(QString("iEzsigndocumentStepformcurrent"), ::OpenAPI::toJsonValue(i_ezsigndocument_stepformcurrent));
    }
    if (m_i_ezsigndocument_stepsignaturetotal_isSet) {
        obj.insert(QString("iEzsigndocumentStepsignaturetotal"), ::OpenAPI::toJsonValue(i_ezsigndocument_stepsignaturetotal));
    }
    if (m_i_ezsigndocument_stepsignature_current_isSet) {
        obj.insert(QString("iEzsigndocumentStepsignatureCurrent"), ::OpenAPI::toJsonValue(i_ezsigndocument_stepsignature_current));
    }
    if (a_obj_ezsignfoldersignerassociationstatus.size() > 0) {
        obj.insert(QString("a_objEzsignfoldersignerassociationstatus"), ::OpenAPI::toJsonValue(a_obj_ezsignfoldersignerassociationstatus));
    }
    return obj;
}

qint32 OAIEzsigndocument_ResponseCompound_allOf::getIEzsigndocumentStepformtotal() const {
    return i_ezsigndocument_stepformtotal;
}
void OAIEzsigndocument_ResponseCompound_allOf::setIEzsigndocumentStepformtotal(const qint32 &i_ezsigndocument_stepformtotal) {
    this->i_ezsigndocument_stepformtotal = i_ezsigndocument_stepformtotal;
    this->m_i_ezsigndocument_stepformtotal_isSet = true;
}

bool OAIEzsigndocument_ResponseCompound_allOf::is_i_ezsigndocument_stepformtotal_Set() const{
    return m_i_ezsigndocument_stepformtotal_isSet;
}

bool OAIEzsigndocument_ResponseCompound_allOf::is_i_ezsigndocument_stepformtotal_Valid() const{
    return m_i_ezsigndocument_stepformtotal_isValid;
}

qint32 OAIEzsigndocument_ResponseCompound_allOf::getIEzsigndocumentStepformcurrent() const {
    return i_ezsigndocument_stepformcurrent;
}
void OAIEzsigndocument_ResponseCompound_allOf::setIEzsigndocumentStepformcurrent(const qint32 &i_ezsigndocument_stepformcurrent) {
    this->i_ezsigndocument_stepformcurrent = i_ezsigndocument_stepformcurrent;
    this->m_i_ezsigndocument_stepformcurrent_isSet = true;
}

bool OAIEzsigndocument_ResponseCompound_allOf::is_i_ezsigndocument_stepformcurrent_Set() const{
    return m_i_ezsigndocument_stepformcurrent_isSet;
}

bool OAIEzsigndocument_ResponseCompound_allOf::is_i_ezsigndocument_stepformcurrent_Valid() const{
    return m_i_ezsigndocument_stepformcurrent_isValid;
}

qint32 OAIEzsigndocument_ResponseCompound_allOf::getIEzsigndocumentStepsignaturetotal() const {
    return i_ezsigndocument_stepsignaturetotal;
}
void OAIEzsigndocument_ResponseCompound_allOf::setIEzsigndocumentStepsignaturetotal(const qint32 &i_ezsigndocument_stepsignaturetotal) {
    this->i_ezsigndocument_stepsignaturetotal = i_ezsigndocument_stepsignaturetotal;
    this->m_i_ezsigndocument_stepsignaturetotal_isSet = true;
}

bool OAIEzsigndocument_ResponseCompound_allOf::is_i_ezsigndocument_stepsignaturetotal_Set() const{
    return m_i_ezsigndocument_stepsignaturetotal_isSet;
}

bool OAIEzsigndocument_ResponseCompound_allOf::is_i_ezsigndocument_stepsignaturetotal_Valid() const{
    return m_i_ezsigndocument_stepsignaturetotal_isValid;
}

qint32 OAIEzsigndocument_ResponseCompound_allOf::getIEzsigndocumentStepsignatureCurrent() const {
    return i_ezsigndocument_stepsignature_current;
}
void OAIEzsigndocument_ResponseCompound_allOf::setIEzsigndocumentStepsignatureCurrent(const qint32 &i_ezsigndocument_stepsignature_current) {
    this->i_ezsigndocument_stepsignature_current = i_ezsigndocument_stepsignature_current;
    this->m_i_ezsigndocument_stepsignature_current_isSet = true;
}

bool OAIEzsigndocument_ResponseCompound_allOf::is_i_ezsigndocument_stepsignature_current_Set() const{
    return m_i_ezsigndocument_stepsignature_current_isSet;
}

bool OAIEzsigndocument_ResponseCompound_allOf::is_i_ezsigndocument_stepsignature_current_Valid() const{
    return m_i_ezsigndocument_stepsignature_current_isValid;
}

QList<OAICustom_Ezsignfoldersignerassociationstatus_Response> OAIEzsigndocument_ResponseCompound_allOf::getAObjEzsignfoldersignerassociationstatus() const {
    return a_obj_ezsignfoldersignerassociationstatus;
}
void OAIEzsigndocument_ResponseCompound_allOf::setAObjEzsignfoldersignerassociationstatus(const QList<OAICustom_Ezsignfoldersignerassociationstatus_Response> &a_obj_ezsignfoldersignerassociationstatus) {
    this->a_obj_ezsignfoldersignerassociationstatus = a_obj_ezsignfoldersignerassociationstatus;
    this->m_a_obj_ezsignfoldersignerassociationstatus_isSet = true;
}

bool OAIEzsigndocument_ResponseCompound_allOf::is_a_obj_ezsignfoldersignerassociationstatus_Set() const{
    return m_a_obj_ezsignfoldersignerassociationstatus_isSet;
}

bool OAIEzsigndocument_ResponseCompound_allOf::is_a_obj_ezsignfoldersignerassociationstatus_Valid() const{
    return m_a_obj_ezsignfoldersignerassociationstatus_isValid;
}

bool OAIEzsigndocument_ResponseCompound_allOf::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_i_ezsigndocument_stepformtotal_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigndocument_stepformcurrent_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigndocument_stepsignaturetotal_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigndocument_stepsignature_current_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_ezsignfoldersignerassociationstatus.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigndocument_ResponseCompound_allOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_i_ezsigndocument_stepformtotal_isValid && m_i_ezsigndocument_stepformcurrent_isValid && m_i_ezsigndocument_stepsignaturetotal_isValid && m_i_ezsigndocument_stepsignature_current_isValid && m_a_obj_ezsignfoldersignerassociationstatus_isValid && true;
}

} // namespace OpenAPI
