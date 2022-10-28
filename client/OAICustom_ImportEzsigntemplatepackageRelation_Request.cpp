/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.13
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAICustom_ImportEzsigntemplatepackageRelation_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICustom_ImportEzsigntemplatepackageRelation_Request::OAICustom_ImportEzsigntemplatepackageRelation_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICustom_ImportEzsigntemplatepackageRelation_Request::OAICustom_ImportEzsigntemplatepackageRelation_Request() {
    this->initializeModel();
}

OAICustom_ImportEzsigntemplatepackageRelation_Request::~OAICustom_ImportEzsigntemplatepackageRelation_Request() {}

void OAICustom_ImportEzsigntemplatepackageRelation_Request::initializeModel() {

    m_fki_ezsigntemplatepackagesigner_id_isSet = false;
    m_fki_ezsigntemplatepackagesigner_id_isValid = false;

    m_fki_ezsignfoldersignerassociation_id_isSet = false;
    m_fki_ezsignfoldersignerassociation_id_isValid = false;

    m_s_ezsigntemplatepackagesigner_description_isSet = false;
    m_s_ezsigntemplatepackagesigner_description_isValid = false;
}

void OAICustom_ImportEzsigntemplatepackageRelation_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICustom_ImportEzsigntemplatepackageRelation_Request::fromJsonObject(QJsonObject json) {

    m_fki_ezsigntemplatepackagesigner_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsigntemplatepackagesigner_id, json[QString("fkiEzsigntemplatepackagesignerID")]);
    m_fki_ezsigntemplatepackagesigner_id_isSet = !json[QString("fkiEzsigntemplatepackagesignerID")].isNull() && m_fki_ezsigntemplatepackagesigner_id_isValid;

    m_fki_ezsignfoldersignerassociation_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsignfoldersignerassociation_id, json[QString("fkiEzsignfoldersignerassociationID")]);
    m_fki_ezsignfoldersignerassociation_id_isSet = !json[QString("fkiEzsignfoldersignerassociationID")].isNull() && m_fki_ezsignfoldersignerassociation_id_isValid;

    m_s_ezsigntemplatepackagesigner_description_isValid = ::OpenAPI::fromJsonValue(s_ezsigntemplatepackagesigner_description, json[QString("sEzsigntemplatepackagesignerDescription")]);
    m_s_ezsigntemplatepackagesigner_description_isSet = !json[QString("sEzsigntemplatepackagesignerDescription")].isNull() && m_s_ezsigntemplatepackagesigner_description_isValid;
}

QString OAICustom_ImportEzsigntemplatepackageRelation_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICustom_ImportEzsigntemplatepackageRelation_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_fki_ezsigntemplatepackagesigner_id_isSet) {
        obj.insert(QString("fkiEzsigntemplatepackagesignerID"), ::OpenAPI::toJsonValue(fki_ezsigntemplatepackagesigner_id));
    }
    if (m_fki_ezsignfoldersignerassociation_id_isSet) {
        obj.insert(QString("fkiEzsignfoldersignerassociationID"), ::OpenAPI::toJsonValue(fki_ezsignfoldersignerassociation_id));
    }
    if (m_s_ezsigntemplatepackagesigner_description_isSet) {
        obj.insert(QString("sEzsigntemplatepackagesignerDescription"), ::OpenAPI::toJsonValue(s_ezsigntemplatepackagesigner_description));
    }
    return obj;
}

qint32 OAICustom_ImportEzsigntemplatepackageRelation_Request::getFkiEzsigntemplatepackagesignerId() const {
    return fki_ezsigntemplatepackagesigner_id;
}
void OAICustom_ImportEzsigntemplatepackageRelation_Request::setFkiEzsigntemplatepackagesignerId(const qint32 &fki_ezsigntemplatepackagesigner_id) {
    this->fki_ezsigntemplatepackagesigner_id = fki_ezsigntemplatepackagesigner_id;
    this->m_fki_ezsigntemplatepackagesigner_id_isSet = true;
}

bool OAICustom_ImportEzsigntemplatepackageRelation_Request::is_fki_ezsigntemplatepackagesigner_id_Set() const{
    return m_fki_ezsigntemplatepackagesigner_id_isSet;
}

bool OAICustom_ImportEzsigntemplatepackageRelation_Request::is_fki_ezsigntemplatepackagesigner_id_Valid() const{
    return m_fki_ezsigntemplatepackagesigner_id_isValid;
}

qint32 OAICustom_ImportEzsigntemplatepackageRelation_Request::getFkiEzsignfoldersignerassociationId() const {
    return fki_ezsignfoldersignerassociation_id;
}
void OAICustom_ImportEzsigntemplatepackageRelation_Request::setFkiEzsignfoldersignerassociationId(const qint32 &fki_ezsignfoldersignerassociation_id) {
    this->fki_ezsignfoldersignerassociation_id = fki_ezsignfoldersignerassociation_id;
    this->m_fki_ezsignfoldersignerassociation_id_isSet = true;
}

bool OAICustom_ImportEzsigntemplatepackageRelation_Request::is_fki_ezsignfoldersignerassociation_id_Set() const{
    return m_fki_ezsignfoldersignerassociation_id_isSet;
}

bool OAICustom_ImportEzsigntemplatepackageRelation_Request::is_fki_ezsignfoldersignerassociation_id_Valid() const{
    return m_fki_ezsignfoldersignerassociation_id_isValid;
}

QString OAICustom_ImportEzsigntemplatepackageRelation_Request::getSEzsigntemplatepackagesignerDescription() const {
    return s_ezsigntemplatepackagesigner_description;
}
void OAICustom_ImportEzsigntemplatepackageRelation_Request::setSEzsigntemplatepackagesignerDescription(const QString &s_ezsigntemplatepackagesigner_description) {
    this->s_ezsigntemplatepackagesigner_description = s_ezsigntemplatepackagesigner_description;
    this->m_s_ezsigntemplatepackagesigner_description_isSet = true;
}

bool OAICustom_ImportEzsigntemplatepackageRelation_Request::is_s_ezsigntemplatepackagesigner_description_Set() const{
    return m_s_ezsigntemplatepackagesigner_description_isSet;
}

bool OAICustom_ImportEzsigntemplatepackageRelation_Request::is_s_ezsigntemplatepackagesigner_description_Valid() const{
    return m_s_ezsigntemplatepackagesigner_description_isValid;
}

bool OAICustom_ImportEzsigntemplatepackageRelation_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_fki_ezsigntemplatepackagesigner_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsignfoldersignerassociation_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigntemplatepackagesigner_description_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICustom_ImportEzsigntemplatepackageRelation_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_ezsignfoldersignerassociation_id_isValid && true;
}

} // namespace OpenAPI
