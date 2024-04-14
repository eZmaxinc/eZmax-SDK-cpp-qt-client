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

#include "Ezsigndocument_applyEzsigntemplate_v2_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigndocument_applyEzsigntemplate_v2_Request::Ezsigndocument_applyEzsigntemplate_v2_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigndocument_applyEzsigntemplate_v2_Request::Ezsigndocument_applyEzsigntemplate_v2_Request() {
    this->initializeModel();
}

Ezsigndocument_applyEzsigntemplate_v2_Request::~Ezsigndocument_applyEzsigntemplate_v2_Request() {}

void Ezsigndocument_applyEzsigntemplate_v2_Request::initializeModel() {

    m_fki_ezsigntemplate_id_isSet = false;
    m_fki_ezsigntemplate_id_isValid = false;

    m_a_s_ezsigntemplatesigner_isSet = false;
    m_a_s_ezsigntemplatesigner_isValid = false;

    m_a_pki_ezsignfoldersignerassociation_id_isSet = false;
    m_a_pki_ezsignfoldersignerassociation_id_isValid = false;
}

void Ezsigndocument_applyEzsigntemplate_v2_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigndocument_applyEzsigntemplate_v2_Request::fromJsonObject(QJsonObject json) {

    m_fki_ezsigntemplate_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsigntemplate_id, json[QString("fkiEzsigntemplateID")]);
    m_fki_ezsigntemplate_id_isSet = !json[QString("fkiEzsigntemplateID")].isNull() && m_fki_ezsigntemplate_id_isValid;

    m_a_s_ezsigntemplatesigner_isValid = ::Ezmaxapi::fromJsonValue(m_a_s_ezsigntemplatesigner, json[QString("a_sEzsigntemplatesigner")]);
    m_a_s_ezsigntemplatesigner_isSet = !json[QString("a_sEzsigntemplatesigner")].isNull() && m_a_s_ezsigntemplatesigner_isValid;

    m_a_pki_ezsignfoldersignerassociation_id_isValid = ::Ezmaxapi::fromJsonValue(m_a_pki_ezsignfoldersignerassociation_id, json[QString("a_pkiEzsignfoldersignerassociationID")]);
    m_a_pki_ezsignfoldersignerassociation_id_isSet = !json[QString("a_pkiEzsignfoldersignerassociationID")].isNull() && m_a_pki_ezsignfoldersignerassociation_id_isValid;
}

QString Ezsigndocument_applyEzsigntemplate_v2_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigndocument_applyEzsigntemplate_v2_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_fki_ezsigntemplate_id_isSet) {
        obj.insert(QString("fkiEzsigntemplateID"), ::Ezmaxapi::toJsonValue(m_fki_ezsigntemplate_id));
    }
    if (m_a_s_ezsigntemplatesigner.size() > 0) {
        obj.insert(QString("a_sEzsigntemplatesigner"), ::Ezmaxapi::toJsonValue(m_a_s_ezsigntemplatesigner));
    }
    if (m_a_pki_ezsignfoldersignerassociation_id.size() > 0) {
        obj.insert(QString("a_pkiEzsignfoldersignerassociationID"), ::Ezmaxapi::toJsonValue(m_a_pki_ezsignfoldersignerassociation_id));
    }
    return obj;
}

qint32 Ezsigndocument_applyEzsigntemplate_v2_Request::getFkiEzsigntemplateId() const {
    return m_fki_ezsigntemplate_id;
}
void Ezsigndocument_applyEzsigntemplate_v2_Request::setFkiEzsigntemplateId(const qint32 &fki_ezsigntemplate_id) {
    m_fki_ezsigntemplate_id = fki_ezsigntemplate_id;
    m_fki_ezsigntemplate_id_isSet = true;
}

bool Ezsigndocument_applyEzsigntemplate_v2_Request::is_fki_ezsigntemplate_id_Set() const{
    return m_fki_ezsigntemplate_id_isSet;
}

bool Ezsigndocument_applyEzsigntemplate_v2_Request::is_fki_ezsigntemplate_id_Valid() const{
    return m_fki_ezsigntemplate_id_isValid;
}

QList<QString> Ezsigndocument_applyEzsigntemplate_v2_Request::getASEzsigntemplatesigner() const {
    return m_a_s_ezsigntemplatesigner;
}
void Ezsigndocument_applyEzsigntemplate_v2_Request::setASEzsigntemplatesigner(const QList<QString> &a_s_ezsigntemplatesigner) {
    m_a_s_ezsigntemplatesigner = a_s_ezsigntemplatesigner;
    m_a_s_ezsigntemplatesigner_isSet = true;
}

bool Ezsigndocument_applyEzsigntemplate_v2_Request::is_a_s_ezsigntemplatesigner_Set() const{
    return m_a_s_ezsigntemplatesigner_isSet;
}

bool Ezsigndocument_applyEzsigntemplate_v2_Request::is_a_s_ezsigntemplatesigner_Valid() const{
    return m_a_s_ezsigntemplatesigner_isValid;
}

QList<qint32> Ezsigndocument_applyEzsigntemplate_v2_Request::getAPkiEzsignfoldersignerassociationId() const {
    return m_a_pki_ezsignfoldersignerassociation_id;
}
void Ezsigndocument_applyEzsigntemplate_v2_Request::setAPkiEzsignfoldersignerassociationId(const QList<qint32> &a_pki_ezsignfoldersignerassociation_id) {
    m_a_pki_ezsignfoldersignerassociation_id = a_pki_ezsignfoldersignerassociation_id;
    m_a_pki_ezsignfoldersignerassociation_id_isSet = true;
}

bool Ezsigndocument_applyEzsigntemplate_v2_Request::is_a_pki_ezsignfoldersignerassociation_id_Set() const{
    return m_a_pki_ezsignfoldersignerassociation_id_isSet;
}

bool Ezsigndocument_applyEzsigntemplate_v2_Request::is_a_pki_ezsignfoldersignerassociation_id_Valid() const{
    return m_a_pki_ezsignfoldersignerassociation_id_isValid;
}

bool Ezsigndocument_applyEzsigntemplate_v2_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_fki_ezsigntemplate_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_s_ezsigntemplatesigner.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_pki_ezsignfoldersignerassociation_id.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsigndocument_applyEzsigntemplate_v2_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_ezsigntemplate_id_isValid && m_a_s_ezsigntemplatesigner_isValid && m_a_pki_ezsignfoldersignerassociation_id_isValid && true;
}

} // namespace Ezmaxapi
